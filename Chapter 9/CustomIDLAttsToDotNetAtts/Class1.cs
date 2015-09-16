using System;
using System.CodeDom;
using System.Runtime.InteropServices;
using System.Reflection;
using System.Reflection.Emit;
using System.Windows.Forms;

namespace CustomIDLAttsToDotNetAtts
{

	#region Managed Helpers
	internal enum REGKIND
	{
		REGKIND_DEFAULT         = 0,
		REGKIND_REGISTER        = 1,
		REGKIND_NONE            = 2
	}

	internal interface UCOMITypeLib2 : UCOMTypeLib
	{
		void GetCustData(Guid guid, out Object pVarVal);
		void GetLibStatistics(out int pcUniqueNames, out int pcchUniqueNames);

		void GetDocumentation2(int index, int lcid, out string pbstrHelpString,
								out int pdwHelpStringContext,
								out string pbstrHelpStringDll);


		void GetAllCustData(
			[out] CUSTDATA * pCustData
					  );
	}
	#endregion 

	class Class1
	{
		// Need to leverage the LoadTypeLibEx() API to do our dirty work.
		// Param 3: UCOMITypeLib2 is the .NET version of ITypeLib2.
		[DllImport("oleaut32.dll", CharSet = CharSet.Unicode, PreserveSig = false)]
		private static extern void LoadTypeLibEx(string strTypeLibName, 
			REGKIND regKind, 
			out UCOMITypeLib2 TypeLib);

		[STAThread]
		static void Main(string[] args)
		{
			// Gather user input.
			string pathToComServer = "";
			Console.WriteLine("Pick a COM server...");
			OpenFileDialog d = new OpenFileDialog();
			if(d.ShowDialog() == DialogResult.OK)
				pathToComServer = d.FileName;
		}
	}
}

/*

// CustomIDLData.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <atlbase.h>
#include <atlconv.h>
#include <iostream.h>

int main(int argc, char* argv[])
{
	USES_CONVERSION;

	CoInitialize(NULL);
	ITypeLib2* pTLib2 = NULL;
	ITypeInfo2* pTInfo2 = NULL;
	
	// Load the type library.
	LoadTypeLibEx(L"customIDLServer.tlb", REGKIND_NONE, (ITypeLib**)&pTLib2);

	// Read out the custom data from the library.
	CUSTDATA theCustomData;
	pTLib2->GetAllCustData(&theCustomData);
	for(ULONG i = 0; i < theCustomData.cCustData; i++)
	{	
		VARIANT customValue;
		VariantInit(&customValue);
		VariantCopy(&customValue, &theCustomData.prgCustData[i].varValue);

		if(customValue.vt == VT_BSTR)
		{
			// Display custom data.
			CComBSTR customGUID(theCustomData.prgCustData[i].guid);
			cout << "Custom data name is: " << W2A(customGUID) << endl;			
			cout << "Custom data value is: " << W2A(customValue.bstrVal) << endl;
			VariantClear(&customValue);
		}
	}
	cout << endl;

	// Read out the custom data from the types.
	for(UINT j = 0; j < pTLib2->GetTypeInfoCount(); j++)	
	{	
		pTLib2->GetTypeInfo(j, (ITypeInfo**)&pTInfo2);
		pTInfo2->GetAllCustData(&theCustomData);
		
		for(ULONG k = 0; k < theCustomData.cCustData; k++)
		{	
			VARIANT customValue;
			VariantInit(&customValue);
			VariantCopy(&customValue, &theCustomData.prgCustData[k].varValue);

			if(customValue.vt == VT_BSTR)
			{
				// Display custom data.
				CComBSTR customGUID(theCustomData.prgCustData[k].guid);
				cout << "Custom data name is: " << W2A(customGUID) << endl;			
				cout << "Custom data value is: " << W2A(customValue.bstrVal) << endl;
				VariantClear(&customValue);
			}
		}
		pTInfo2->Release();
		cout << endl;
	}
	// Clean up.
	if(pTLib2) pTLib2->Release();
	CoUninitialize();
	return 0;
}


	internal class ImporterNotiferSink : MarshalByRefObject, ITypeLibImporterNotifySink
	{
		public void ReportEvent(System.Runtime.InteropServices.ImporterEventKind eventKind, 
			int eventCode, string eventMsg)
		{
			Console.WriteLine("Event reported: {0}", eventMsg);
		}
		public System.Reflection.Assembly ResolveRef(object typeLib)
		{
			// no-op.
			return Assembly.GetCallingAssembly();
		}
	}

	class MyTlbImpApp
	{


		static void Main(string[] args)
		{
		}

		public static void GenerateAssemblyFromTypeLib(string pathToComServer)
		{
			// Load type information for COM server.
			UCOMITypeLib typLib = null;
			try
			{
				LoadTypeLibEx(pathToComServer, REGKIND.REGKIND_DEFAULT, out typLib);
				string strName, strDoc, strHelpFile;
				int helpCtx;
				Console.WriteLine("COM Library Description:");
				typLib.GetDocumentation(-1, out strName, out strDoc, out helpCtx, out strHelpFile);
				Console.WriteLine("->Name: {0}", strName);
				Console.WriteLine("->Doc: {0}", strDoc);
				Console.WriteLine("->Help Context: {0}", helpCtx.ToString());
				Console.WriteLine("->Help File: {0}", strHelpFile);

			}
			catch
			{ 
				Console.WriteLine("ugh...can't load COM type info!");
				return;
			}

			// Need a sink for the TypeLibConverter.
			ImporterNotiferSink sink = new ImporterNotiferSink();

			// This class will covert COM type info into
			// .NET metadata and vice-versa.
			TypeLibConverter tlc = new TypeLibConverter();

			// Generate name of the assembly.
			string typeLibName = Marshal.GetTypeLibName(typLib);
			string asmName = "interop." + typeLibName + ".dll"; 

			// Generate version of this assembly.
			// (need to marshal a structure).
			// See steps 1, 2, 3, 4 below.
			// 1) Get size of the TYPELIBATTR structure.
			TYPELIBATTR typAtts = new TYPELIBATTR();
			Type TYPELIBATTRType = typAtts.GetType();
			int structSize = Marshal.SizeOf(TYPELIBATTRType);

			// 2) Allocate memory for this structure.
			IntPtr ptr = IntPtr.Zero;
			ptr = Marshal.AllocHGlobal(structSize);
			
			// 3) Convert point to allocated structure into a TYPELIBATTR type.
			typLib.GetLibAttr(out ptr);
			typAtts = (TYPELIBATTR) Marshal.PtrToStructure(ptr, TYPELIBATTRType);

			// Just for kicks, print out the LibID, and version of this type library.
			PrintComTypeLibAtts(typAtts);

			// Now make the assembly based on COM type information.
			AssemblyBuilder asmBuilder = tlc.ConvertTypeLibToAssembly((UCOMITypeLib)typLib, 
				asmName,
				0,  
				sink, 
				null,		// If you have a strong name: keyPair.PublicKey, 
				null,		// If you have a strong name: keyPair  
				typeLibName, 
				new Version(typAtts.wMajorVerNum, 
				            typAtts.wMinorVerNum, 0, 0)); 
			asmBuilder.Save(asmName);

			// 4) Clean up memory we allocated.
			Marshal.FreeHGlobal(ptr);
		}

		public static void PrintComTypeLibAtts(TYPELIBATTR typAtts)
		{
			Console.WriteLine("COM Type Library attributes:");
			Console.WriteLine("->LibID: {0}", typAtts.guid.ToString());
			Console.WriteLine("->Major: {0}",typAtts.wMajorVerNum);
			Console.WriteLine("->Minor: {0}",typAtts.wMinorVerNum);
			Console.WriteLine("->Locale ID: {0}\n",typAtts.lcid);
		}
 	}
}
*/