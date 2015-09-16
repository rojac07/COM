#region Notes on Example
/* This C# application will invoke the 
 * unmanaged members found within MyCustomDll.dll.
 * Here are the unmanagaed prototypes:
 * 
 * // Prototypes for basic functions.
 * extern "C" MYCUSTOMDLL_API int AddNumbers(int x, int y);
 * extern "C" MYCUSTOMDLL_API int AddArray(int x[], int size);
 *
 * // Prototypes for struct marshaling.
 * extern "C" MYCUSTOMDLL_API void DisplayBetterCar(CAR2* theCar);
 * extern "C" MYCUSTOMDLL_API void GiveMeThreeBasicCars(CAR** theCars);
 *
 * // Prototypes for class marshaling.
 * extern "C" MYCUSTOMDLL_API CMiniVan* CreateMiniVan();
 * extern "C" MYCUSTOMDLL_API void DeleteMiniVan(CMiniVan* obj);
 * 
 * Some of these members make use of the following custom types:
 * 
 * // A basic structure.
 * typedef struct _CAR
 * {
 * 	 char* make;
 * 	 char* color; 
 * } CAR;
 * 
 * // A structure containing another structure.
 * typedef struct _CAR2
 * {
 * 	 CAR theCar;
 * 	 char* petName; 
 * } CAR2;
 * 
 * 
 * // A class to be exported.
 * class MYCUSTOMDLL_API CMiniVan
 * {
 * public:
 * 	 CMiniVan(){m_numbKids = 52;}
 * 	 int DisplayNumberOfKids() 
 * 	 { return m_numbKids;}
 * 
 * private:
 * 	 int m_numbKids;
 * };
 */
#endregion

using System;

// For DllImportAttribute.
using System.Runtime.InteropServices;

namespace PInvokeCustomDLL
{
	// Example of explicit layout.
	[StructLayout(LayoutKind.Explicit)]
	public struct POINT
	{
		[FieldOffset(0)] int x;
		[FieldOffset(4)] int y;
	}

	// managed versions of the unmanaged structs.
	// A basic structure.
	[StructLayout(LayoutKind.Sequential)]
	public class CAR
	{
		public string make;
	    public string color; 
	}  

	// A structure containing another structure.
	[StructLayout(LayoutKind.Sequential)]
	public class CAR2
    {
		public CAR theCar = new CAR();
		public string petName; 
	}  

	#region The Wrapper of MyCustom.dll
	// This is a wrapper class 
	// which encapsulated the details
	// of PInvoke from the caller.
	public class MyCustomDLLWrapper
	{
		// extern "C" MYCUSTOMDLL_API int AddNumbers(int x, int y);
		[DllImport("MyCustomDll.dll")]
		public static extern int AddNumbers(int x, int y);

		// extern "C" MYCUSTOMDLL_API int AddArray(int x[], int size);
		[DllImport("MyCustomDll.dll")]
		public static extern int AddArray(int[] x, int y);

		// extern "C" MYCUSTOMDLL_API void DisplayBetterCar(CAR2* theCar);
		[DllImport("MyCustomDll.dll", CharSet=CharSet.Ansi)]
		public static extern int DisplayBetterCar( CAR2 c);

		// extern "C" MYCUSTOMDLL_API void GiveMeThreeBasicCars(CAR** theCars);
		[DllImport("MyCustomDll.dll", CharSet=CharSet.Ansi)]
		public static extern void GiveMeThreeBasicCars(out IntPtr theCars); 		 

		// extern "C" MYCUSTOMDLL_API CMiniVan* CreateMiniVan();
		[DllImport("MyCustomDll.dll")]
		public static extern IntPtr CreateMiniVan(); 		 

		// extern "C" MYCUSTOMDLL_API void DeleteMiniVan(CMiniVan* obj);
		[DllImport("MyCustomDll.dll")]
		public static extern void DeleteMiniVan(IntPtr obj);

		// CMiniVan::DisplayNumberOfKids
		// Note that the entry point is the compiler generated 
		// mangled name (use dumpbin / exports mycustomdll.dll
		// to see the mangled names for each class member).
		[DllImport( "MyCustomDll.dll", 
			  EntryPoint="?DisplayNumberOfKids@CMiniVan@@QAEHXZ", 
			  CallingConvention=CallingConvention.ThisCall )]
		public static extern int GetTheKids(IntPtr thisPointer);	
	}
	#endregion

	class CustomDLLInvoker
	{
		[STAThread]
		static void Main(string[] args)
		{
			// Add some numbers.
			Console.WriteLine("Invoking AddNumbers()...");
			Console.WriteLine("10 + 10 is {0}", 
				MyCustomDLLWrapper.AddNumbers(10, 10));

			// Add array of numbers.
			Console.WriteLine("\nInvoking AddArray()...");
			int[] theVals = {10, 23, 83, 9, 12};
			Console.WriteLine("Sum of array is {0}", 
				MyCustomDLLWrapper.AddArray(theVals, 5));

			// Display a better car.
			Console.WriteLine("\nInvoking DisplayBetterCar()...");
			Console.WriteLine("...message boxes are displaying...");
			CAR2 myCar = new CAR2();
			myCar.petName = "Frank";
			myCar.theCar.color = "Rust";
			myCar.theCar.make = "Colt";
			MyCustomDLLWrapper.DisplayBetterCar(myCar);

			// Get three basic cars.
			Console.WriteLine("\nInvoking GiveMeThreeBasicCars()...");
			int size = 3;
			IntPtr outArray;
			MyCustomDLLWrapper.GiveMeThreeBasicCars(out outArray );
			CAR[] carArray = new CAR[size];
			IntPtr current = outArray;

			// Print out each structure. 
			for( int i = 0; i < size; i++ )
			{
				carArray[ i ] = new CAR();
				Marshal.PtrToStructure( current, carArray[ i ]);
				Console.WriteLine( "Structure {0}: {1} {2}", i, 
					carArray[ i ].make, carArray[ i ].color);

				Marshal.DestroyStructure( current, typeof(CAR) );
				current = (IntPtr)((int)current + 
					Marshal.SizeOf( carArray[ i ] ));         
			}
			Marshal.FreeCoTaskMem( outArray );
			outArray = IntPtr.Zero;
			Marshal.FreeCoTaskMem( current);
			current = IntPtr.Zero;

			// Get a new CMiniVan type.
			Console.WriteLine("\nInvoking CMiniVan.DisplayNumberOfKids()...");
			IntPtr instancePtr = MyCustomDLLWrapper.CreateMiniVan();
		
			int kidCount = MyCustomDLLWrapper.GetTheKids(instancePtr); 
			Console.WriteLine("Number of kids in Mini Van is: {0} \n", kidCount);
		
			MyCustomDLLWrapper.DeleteMiniVan(instancePtr);		
		}
	}
}
