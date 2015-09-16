using System;
using interop.AtlCarServer;

namespace CSharpAtlComServerClient
{
	class UFO : ITurbo
	{
		public void TurboBlast()
		{ Console.WriteLine("UFOs are always at warp speed...");}
	}

	class CSharpATLClient
	{
		[STAThread]
		static void Main(string[] args)
		{

			// Use the ATL Car using the ComCarClass
			// type.  Recall!  '-Class' types allow you
			// to call any member of each supported
			// interface.
			ComCarClass c = new ComCarClass();
			c.TurnOnRadio(RADIOTYPE.EIGHT_TRACK);
			c.SpeedUp(10);
			c.TurboBlast();

			// Exercise the enum!
			RADIOTYPE rt = RADIOTYPE.AM_RADIO;
			string[] names = Enum.GetNames(rt.GetType());
			foreach(string s in names)
			{
				Console.WriteLine("Name: {0}", s);
			}

			// Now make use of explicit interfaces.
			IComCar itfComCar = new ComCarClass();
			itfComCar.TurnOnRadio(RADIOTYPE.FM_RADIO);
			
			// Get ITurbo.
			try
			{
				ITurbo itfTurbo = (ITurbo)itfComCar;
				itfTurbo.TurboBlast();
			}
			catch(InvalidCastException e)
			{
				Console.WriteLine(e.Message);
			}
			
			// Now using default interface class type.
			ComCar c2 = new ComCar();
			c2.TurnOnRadio(RADIOTYPE.AM_RADIO);
			// c2.TurboBoost(); // Bomb!

			ITurbo itfTurbo2 = (ITurbo)c2;
			itfTurbo2.TurboBlast();

			// Create some jets, UFOs and comcars.
			ComCarClass c3 = new ComCarClass();
			JetPlaneClass j = new JetPlaneClass();
			UFO u = new UFO();
			XCelerate(c3);
			XCelerate(j);
			XCelerate(u);

			// An array of ITurbo interface.	
			ITurbo[] fastVehicles = {new ComCarClass(),
				                     new UFO(),
				                     new JetPlaneClass()};
			foreach(ITurbo i in fastVehicles)
				i.TurboBlast();
		}

		// Turbo each COM type.
		public static void XCelerate(ITurbo itfTurbo)
		{
			itfTurbo.TurboBlast();
		}
	}
}
