using System;
using VbOptParamsServer;

namespace CSharpOptParamClient
{
	class CSharpOptParamsClient
	{
		[STAThread]
		static void Main(string[] args)
		{
			CoOptParamsClass  c = new CoOptParamsClass();
			int i;

			i = c.AddTwoOrThreeNumbers(10, 20, 40);
			Console.WriteLine("10 + 20 + 40 is {0}", i);

			i = c.AddWithDefaults(4, 2);
			Console.WriteLine("4 + 2 is {0}", i);
			
			// Optional VARIANTs.
			object objMissing = Type.Missing;

			// Only displays "Hello"
			c.UseThisOptionalThing("Hello", objMissing);	

			// Displays "Hello There"
			c.UseThisOptionalThing("Hello", "There");
		}
	}
}
