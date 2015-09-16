using System;
using VbVariantServer;
using System.Runtime.InteropServices;

namespace CSharpVariantClient
{
	class VariantClient
	{
		[STAThread]
		static void Main(string[] args)
		{
			// Fun with VARIANTs.
			VariantObjClass varObj = new VariantObjClass();
			 
			// Check out some details...
			// Any required boxing occures automatically!
			Console.WriteLine("{0}\n", varObj.CheckThisVariant("Hello"));  // VT_BSTR
			Console.WriteLine("{0}\n", varObj.CheckThisVariant(20));       // VT_I4
			Console.WriteLine("{0}\n", varObj.CheckThisVariant(999999));   // VT_I4
			Console.WriteLine("{0}\n", varObj.CheckThisVariant(true));     // VT_BOOL
			Console.WriteLine("{0}\n", varObj.CheckThisVariant(9.876));    // VT_R8
			int[] theStuff = {12,22,33};
			Console.WriteLine("{0}\n", varObj.CheckThisVariant(theStuff)); // VT_ARRAY | VT_I4
			
			// Make use of base class types.
			System.Int32 myInt32 = 500;
			Console.WriteLine("{0}\n", varObj.CheckThisVariant(myInt32));  // VT_I4

			// Of course, you can use explicit System.Object types as well.
			object theObj = "Some string data";
			Console.WriteLine("{0}\n", varObj.CheckThisVariant(theObj));   // VT_BSTR

			// Cast if necessary...
			Console.WriteLine("{0}\n", varObj.CheckThisVariant((byte)27));   // VT_I2 
			
			// Pass a value as a variant of type VT_CURRENCY.
			Console.WriteLine("{0}\n", 
				varObj.CheckThisVariant(new CurrencyWrapper(new Decimal(75.25))));

			// Add some variants.
			Console.WriteLine("Summation: {0}", varObj.AddTheseVariants("Hello", "There"));
			Console.WriteLine("Summation: {0}", varObj.AddTheseVariants(4, 4));
			Console.WriteLine("Summation: {0}", varObj.AddTheseVariants(54.33, 98.3));
			Console.WriteLine("Summation: {0}", varObj.AddTheseVariants(false, true));	
			Console.WriteLine("Summation: {0}", varObj.AddTheseVariants(theStuff, theStuff));
		}
	}
}
