using System;
using System.Drawing;
using System.Collections;
using System.ComponentModel;
using System.Windows.Forms;
using System.Data;
using System.Runtime.InteropServices;

namespace ManagedComTypeReader
{	
	/// This enum is a .NET version of the COM REGKIND
	/// enum used in conjunction with the LoadTypeLibEx()
	/// API COM library function.
	internal enum REGKIND
	{
		REGKIND_DEFAULT = 0,
		REGKIND_REGISTER = 1,
		REGKIND_NONE = 2
	}

	/// <summary>
	/// Summary description for Form1.
	/// </summary>
	public class Form1 : System.Windows.Forms.Form
	{
		// Need to leverage the LoadTypeLibEx() API to do our dirty work.
		// Param 3: UCOMITypeLib is the .NET version of ITypeLib.
		[DllImport("oleaut32.dll", CharSet = CharSet.Unicode, PreserveSig = false)]
		private static extern void LoadTypeLibEx(string strTypeLibName, 
			REGKIND regKind, out UCOMITypeLib TypeLib);

		// The Type Library.
		UCOMITypeLib theTypeLib;

		private System.Windows.Forms.MainMenu mainMenu1;
		private System.Windows.Forms.MenuItem mnuFile;
		private System.Windows.Forms.MenuItem mnuOpen;
		private System.Windows.Forms.MenuItem mnuExit;
		private System.Windows.Forms.ListBox lstBoxCoclasses;
		private System.Windows.Forms.Label label1;
		private System.Windows.Forms.Label label2;
		private System.Windows.Forms.ListBox lstBoxInterfaces;
		private System.Windows.Forms.Label label3;
		private System.Windows.Forms.ListBox lstBoxEnums;
		private System.Windows.Forms.Label lblNumbOfTypes;
		private System.Windows.Forms.Label lblTypeLibStats;
		private System.ComponentModel.Container components = null;

		public Form1()
		{
			InitializeComponent();
		}

		protected override void Dispose( bool disposing )
		{
			if( disposing )
			{
				if (components != null) 
				{
					components.Dispose();
				}
			}
			base.Dispose( disposing );
		}

		#region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		private void InitializeComponent()
		{
			this.mainMenu1 = new System.Windows.Forms.MainMenu();
			this.mnuFile = new System.Windows.Forms.MenuItem();
			this.mnuOpen = new System.Windows.Forms.MenuItem();
			this.mnuExit = new System.Windows.Forms.MenuItem();
			this.lstBoxCoclasses = new System.Windows.Forms.ListBox();
			this.label1 = new System.Windows.Forms.Label();
			this.label2 = new System.Windows.Forms.Label();
			this.lstBoxInterfaces = new System.Windows.Forms.ListBox();
			this.label3 = new System.Windows.Forms.Label();
			this.lstBoxEnums = new System.Windows.Forms.ListBox();
			this.lblNumbOfTypes = new System.Windows.Forms.Label();
			this.lblTypeLibStats = new System.Windows.Forms.Label();
			this.SuspendLayout();
			// 
			// mainMenu1
			// 
			this.mainMenu1.MenuItems.AddRange(new System.Windows.Forms.MenuItem[] {
																					  this.mnuFile});
			// 
			// mnuFile
			// 
			this.mnuFile.Index = 0;
			this.mnuFile.MenuItems.AddRange(new System.Windows.Forms.MenuItem[] {
																					this.mnuOpen,
																					this.mnuExit});
			this.mnuFile.Text = "File";
			// 
			// mnuOpen
			// 
			this.mnuOpen.Index = 0;
			this.mnuOpen.Text = "Open...";
			this.mnuOpen.Click += new System.EventHandler(this.mnuOpen_Click);
			// 
			// mnuExit
			// 
			this.mnuExit.Index = 1;
			this.mnuExit.Text = "Exit";
			this.mnuExit.Click += new System.EventHandler(this.mnuExit_Click);
			// 
			// lstBoxCoclasses
			// 
			this.lstBoxCoclasses.Location = new System.Drawing.Point(8, 152);
			this.lstBoxCoclasses.Name = "lstBoxCoclasses";
			this.lstBoxCoclasses.Size = new System.Drawing.Size(464, 56);
			this.lstBoxCoclasses.TabIndex = 0;
			// 
			// label1
			// 
			this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((System.Byte)(0)));
			this.label1.Location = new System.Drawing.Point(8, 112);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(176, 32);
			this.label1.TabIndex = 1;
			this.label1.Text = "Here are the COM classes";
			this.label1.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
			// 
			// label2
			// 
			this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((System.Byte)(0)));
			this.label2.Location = new System.Drawing.Point(8, 224);
			this.label2.Name = "label2";
			this.label2.Size = new System.Drawing.Size(272, 32);
			this.label2.TabIndex = 3;
			this.label2.Text = "Here are the COM Interfaces";
			this.label2.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
			// 
			// lstBoxInterfaces
			// 
			this.lstBoxInterfaces.Location = new System.Drawing.Point(8, 272);
			this.lstBoxInterfaces.Name = "lstBoxInterfaces";
			this.lstBoxInterfaces.Size = new System.Drawing.Size(464, 56);
			this.lstBoxInterfaces.TabIndex = 2;
			// 
			// label3
			// 
			this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((System.Byte)(0)));
			this.label3.Location = new System.Drawing.Point(8, 344);
			this.label3.Name = "label3";
			this.label3.Size = new System.Drawing.Size(176, 32);
			this.label3.TabIndex = 5;
			this.label3.Text = "Here are the COM Enums";
			this.label3.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
			// 
			// lstBoxEnums
			// 
			this.lstBoxEnums.Location = new System.Drawing.Point(16, 392);
			this.lstBoxEnums.Name = "lstBoxEnums";
			this.lstBoxEnums.Size = new System.Drawing.Size(456, 56);
			this.lstBoxEnums.TabIndex = 4;
			// 
			// lblNumbOfTypes
			// 
			this.lblNumbOfTypes.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((System.Byte)(0)));
			this.lblNumbOfTypes.Location = new System.Drawing.Point(8, 16);
			this.lblNumbOfTypes.Name = "lblNumbOfTypes";
			this.lblNumbOfTypes.Size = new System.Drawing.Size(136, 56);
			this.lblNumbOfTypes.TabIndex = 6;
			this.lblNumbOfTypes.Text = "Number of COM Types in file: 0";
			// 
			// lblTypeLibStats
			// 
			this.lblTypeLibStats.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
			this.lblTypeLibStats.Location = new System.Drawing.Point(160, 16);
			this.lblTypeLibStats.Name = "lblTypeLibStats";
			this.lblTypeLibStats.Size = new System.Drawing.Size(320, 72);
			this.lblTypeLibStats.TabIndex = 7;
			this.lblTypeLibStats.Text = "Type Library Info";
			// 
			// Form1
			// 
			this.AutoScaleBaseSize = new System.Drawing.Size(5, 13);
			this.ClientSize = new System.Drawing.Size(494, 463);
			this.Controls.AddRange(new System.Windows.Forms.Control[] {
																		  this.lblTypeLibStats,
																		  this.lblNumbOfTypes,
																		  this.label3,
																		  this.lstBoxEnums,
																		  this.label2,
																		  this.lstBoxInterfaces,
																		  this.label1,
																		  this.lstBoxCoclasses});
			this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.Fixed3D;
			this.Menu = this.mainMenu1;
			this.Name = "Form1";
			this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
			this.Text = "C# COM Type Library Reader";
			this.ResumeLayout(false);

		}
		#endregion

		[STAThread]
		static void Main() 
		{
			Application.Run(new Form1());
		}

		private void mnuOpen_Click(object sender, System.EventArgs e)
		{
			string typeLibFile = "";

			// Configure look and feel of open dlg.
			OpenFileDialog myOpenFileDialog = new OpenFileDialog();
			myOpenFileDialog.InitialDirectory = ".";
			myOpenFileDialog.Filter = "Type library files (*.tlb)|*.tlb|In-proc COM server (*.dll)|*.dll|Local COM server (*.exe)|*.exe|All files (*.*)|*.*"  ;
			myOpenFileDialog.FilterIndex = 1 ;
			myOpenFileDialog.RestoreDirectory = true ;

			// Do we have a file?
			if(myOpenFileDialog.ShowDialog() == DialogResult.OK)
			{
				typeLibFile = myOpenFileDialog.FileName;
				LoadTypeLibrary(typeLibFile);
				// Fill ListBoxes.
				FillListBoxes(theTypeLib);
			}			
		}

		private void FillListBoxes(UCOMITypeLib itfTypeLib)
		{			
			// Clear out current contents.
			lstBoxCoclasses.Items.Clear();
			lstBoxInterfaces.Items.Clear();
			lstBoxEnums.Items.Clear();

			// Get # of COM types in the library.
			int typeCount = itfTypeLib.GetTypeInfoCount();
			lblNumbOfTypes.Text = "Number of COM Types in file: " + typeCount.ToString();
		
			// Switch between COM type.
			// Dump out the types.
			for(int typeIndex = 0; typeIndex < typeCount; typeIndex++)
			{
				string typeInfoString;
				UCOMITypeInfo pInfo;

				// Get TYPEATTR structure set up.
				TYPEATTR typeAtt = new TYPEATTR();
				Type TYPEATTRType = typeAtt.GetType();
				int structSize = Marshal.SizeOf(TYPEATTRType);
				IntPtr ptr = IntPtr.Zero;
				ptr = Marshal.AllocHGlobal(structSize);
				
				// Get next type info.
				itfTypeLib.GetTypeInfo(typeIndex, out pInfo);
				pInfo.GetTypeAttr(out ptr);	
				typeAtt = (TYPEATTR) Marshal.PtrToStructure(ptr, TYPEATTRType);	

				// Based on the kind of COM type, print out some information. 
				string typeName, helpFile, docString;
				int helpID;

				switch(typeAtt.typekind)
				{
					case TYPEKIND.TKIND_COCLASS:  // type is a coclass.							
						pInfo.GetDocumentation(-1, out typeName, out docString, 
											   out helpID, out helpFile);
						typeInfoString = "Name: " + typeName + "\tCLSID: {" + typeAtt.guid.ToString() + "}";
						lstBoxCoclasses.Items.Add(typeInfoString);
				    break;	
				
					case TYPEKIND.TKIND_INTERFACE:  // type is a interface.							
					case TYPEKIND.TKIND_DISPATCH:
						pInfo.GetDocumentation(-1, out typeName, out docString, 
							out helpID, out helpFile);
						typeInfoString = "Name: " + typeName + "\tIID: {" + typeAtt.guid.ToString() + "}";
						lstBoxInterfaces.Items.Add(typeInfoString);
					break;

					case TYPEKIND.TKIND_ENUM:  // type is a enum.							
						pInfo.GetDocumentation(-1, out typeName, out docString, 
							out helpID, out helpFile);
						typeInfoString = "Name: " + typeName;
						lstBoxEnums.Items.Add(typeInfoString);
					break;
				}
				Marshal.DestroyStructure(ptr, typeAtt.GetType());
			}
		}

		private void LoadTypeLibrary(string typeLibFile)
		{
			// Load type library via DllImported COM f(x).
			LoadTypeLibEx(typeLibFile, REGKIND.REGKIND_DEFAULT, out theTypeLib);

			// Get a managed version of type lib attributes.
			string typLibStats;
			TYPELIBATTR libAtts = new TYPELIBATTR();
			Type TYPELIBATTRType = libAtts.GetType();
			int structSize = Marshal.SizeOf(TYPELIBATTRType);
			IntPtr ptr = IntPtr.Zero;
			ptr = Marshal.AllocHGlobal(structSize);
			theTypeLib.GetLibAttr(out ptr);
			libAtts = (TYPELIBATTR) Marshal.PtrToStructure(ptr, TYPELIBATTRType);

			// Print out stats and release memory.
			typLibStats = "LIBID: " + libAtts.guid.ToString()
				        + "\nVersion (Major): " + libAtts.wMajorVerNum.ToString()
						+ "\nVersion (Minor): " + libAtts.wMinorVerNum.ToString();
			lblTypeLibStats.Text = typLibStats;
			theTypeLib.ReleaseTLibAttr(ptr);
			Marshal.DestroyStructure(ptr, libAtts.GetType());
		}

		private void mnuExit_Click(object sender, System.EventArgs e)
		{
			// See ya!
			Application.Exit();
		}
	}
}
