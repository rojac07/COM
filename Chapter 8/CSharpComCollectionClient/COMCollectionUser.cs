using System;
using VbCollectionServer;
using System.Collections;

namespace CSharpComCollectionClient
{
	class COMCollectionUser
	{
		static void PrintCarCollection(CarCollection coll)
		{
			foreach(CoCarClass car in coll)
			{
				Console.WriteLine("ID: {0} Make: {1} Color: {2} PetName: {3}", car.CarID, 
					car.Make, car.Color, car.PetName);
			}
		}

		[STAThread]
		static void Main(string[] args)
		{
			// Make the COM collection.
			CarCollectionClass carColl = new CarCollectionClass();
			Console.WriteLine("Number of cars in initial collection: {0}", carColl.NumberOfCars());

			// iterate over cars.
			PrintCarCollection(carColl);

			// Add a car.
			CoCar newCar = carColl.AddCar("White", "Jetta", "Chucky", 55);

			// iterate over cars
			Console.WriteLine("\nCollection after adding a car.");
			PrintCarCollection(carColl);

			// Now remove car first 3 cars.
			Console.WriteLine("\nCollection after removing first 3 cars:");
			carColl.RemoveCar(1);
			carColl.RemoveCar(2);
			carColl.RemoveCar(3);

			// iterate over cars.
			PrintCarCollection(carColl);

			// Get car number 1.
			CoCar carOne = carColl.GetCar(1);
			Console.WriteLine("\nFirst Car has ID: {0}", carOne.CarID);

			// Now using raw enumeraor.
			Console.WriteLine("\nNow using IEnumerator");
			IEnumerator itfEnum = carColl.GetEnumerator();
			itfEnum.Reset();
			itfEnum.MoveNext();
			CoCarClass c = (CoCarClass)itfEnum.Current;
			Console.WriteLine("ID: {0} Make: {1} Color: {2} PetName: {3}", c.CarID, 
			  c.Make, c.Color, c.PetName);
			 
		}
	}
}
