using System;

// Make use of generated namespace.
using Intertech.RawComCarLib;

namespace CSharpRawComClient
{
	// Derive a new .NET type from the 
	// unmanaged ComCar.
	class DotNetCar : ComCarClass
	{
		public override void CrankTunes()
		{
			Console.WriteLine("It's .NET from here baby!");
			// Call base class impl.
			base.CrankTunes();
		}
	}

	class RawCarClientApp
	{
		[STAThread]
		static void Main(string[] args)
		{
			// Make a ComCar.
			Console.WriteLine("****Making ComCar and using object reference. ****");
			ComCarClass cCar = new ComCarClass();
			cCar.CrankTunes();

			for(int i = 0; i < 10; i++)
			{
				cCar.SpeedUp(10);
				Console.WriteLine("cCar speed is: {0}", cCar.CurrentSpeed());
			}

			// Now make a ComCar and use interfaces.
			Console.WriteLine("\n**** Making ComCar and using interface references. ****");
			ComCarClass cCar2 = new ComCarClass();
			IRadio itfRadio = (IRadio)cCar2;
			itfRadio.CrankTunes();

			ICar itfCar = (ICar)cCar2;
			for(int i = 0; i < 10; i++)
			{
				itfCar.SpeedUp(10);
				Console.WriteLine("cCar2 speed is: {0}", itfCar.CurrentSpeed());
			}

			// Now make a ComCar using ComCar.
			Console.WriteLine("\n**** Making ComCar and using ComCar. ****");
			ComCar cCar3 = new ComCar();
			
			for(int i = 0; i < 10; i++)
			{
				cCar3.SpeedUp(10);
				Console.WriteLine("cCar2 speed is: {0}", cCar3.CurrentSpeed());
			}

			// Trigger inherited System.Object members.
			Console.WriteLine("\n****Using inherited System.Object members. ****");
			ComCarClass theCar = new ComCarClass();
			ComCarClass otherCar = new ComCarClass();
			Console.WriteLine("ToString: {0}", theCar.ToString());
			Console.WriteLine("Hash: {0}", theCar.GetHashCode().ToString());
			Console.WriteLine("theCar = otherCar? : {0} ", theCar.Equals(otherCar).ToString());
			Type t = theCar.GetType();
			Console.WriteLine(t.Assembly.FullName);

			// Make derived type.
			Console.WriteLine("\n****Using .NET type derived from COM wrapper. ****");
			DotNetCar dnc = new DotNetCar();
			dnc.CrankTunes();
		}
	}
}





