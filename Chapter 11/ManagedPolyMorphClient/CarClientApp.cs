using System;
using DotNetCarLibrary;

namespace ManagedPolyMorphClient
{
	class CarClientApp
	{
		[STAThread]
		static void Main(string[] args)
		{
			// Make array of Cars and pass into 
			// polymorphic function.
			Car[] theCars = {new SportsCar(0, 100, CarColor.Red),
			new MiniVan(0, 50, CarColor.Pink),
			new Roadster(0, 180, CarColor.Black)};

			foreach(Car c in theCars)
			{
				ExerciseCar(c);
			}
			 
		}

		private static void ExerciseCar(Car someCar)
		{
			if(someCar is SportsCar)
			{	
				((SportsCar)someCar).SpeedUp(10);
			}
			if(someCar is MiniVan)
			{
				((MiniVan)someCar).SpeedUp(10);
				((MiniVan)someCar).OpenSideDoor();
			}
			if(someCar is Roadster)
			{
				((Roadster)someCar).SpeedUp(10);
				((Roadster)someCar).OpenSunRoof();
			}
		}
	}
}
