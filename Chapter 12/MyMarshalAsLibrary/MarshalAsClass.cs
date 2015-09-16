using System;
using System.Runtime.InteropServices;

namespace MyMarshalAsLibrary
{
	/// <summary>
	/// Summary description for Class1.
	/// </summary>
	[ClassInterface(ClassInterfaceType.AutoDual)]
	public class MyMarshalAsClass
	{
		public MyMarshalAsClass(){}

		// String marshaling.
		public void ExposeAsLPStr([MarshalAs(UnmanagedType.LPStr)]string s){}
		public void ExposeAsLPWStr([MarshalAs(UnmanagedType.LPWStr)]string s){}
		
		// Object marshaling.
		public void ExposeAsIUnk([MarshalAs(UnmanagedType.IUnknown)]object o){}
		public void ExposeAsIDisp([MarshalAs(UnmanagedType.IDispatch)]object o){}

		// Array marshaling.
		public void ExposeAsCArray([MarshalAs(UnmanagedType.LPArray)]int[] myInts){}

		// Exposing Decimal and Currency.
		public void ExposeAsCURRENCY([MarshalAs(UnmanagedType.Currency)]Decimal d){}
	}
}
