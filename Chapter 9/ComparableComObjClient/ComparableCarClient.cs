using System;
using ComparableComObj;
using System.Collections;
using VbCloneableObjectServer;

namespace ComparableComObjClient
{
	class ComparableCarClient
	{
		[STAThread]
		static void Main(string[] args)
		{
			// An collection of COM cars.
			ArrayList carArray = new ArrayList();

			// Create some comparable COM cars.
			Random r = new Random();
			for(int i = 0; i < 10; i++)
			{
				carArray.Add(new CarClass()); 
				int newID = r.Next(50)+100;
				((CarClass)(carArray[i])).SetCarID((short)newID);
			}
			
			// Print cars as is...
			Console.WriteLine("***** The unordered COM cars *****");
			for(int i = 0; i < carArray.Count; i++)
			{
				Console.WriteLine("Car #{0} has ID {1}", i, 
					((CarClass)(carArray[i])).GetCarID());
			}

			// Now sort the COM objects.
			Console.WriteLine("\n\n***** The ordered COM cars *****");
			carArray.Sort();
			// Print sorted cars...
			for(int i = 0; i < carArray.Count; i++)
			{
				Console.WriteLine("Car #{0} has ID {1}", i, 
					((CarClass)(carArray[i])).GetCarID());
			}
	
			// Test the clone!
			Console.WriteLine("\n***** Testing ICloneable *****");
			CoPointClass p1 = new CoPointClass();
			p1.X = 100;
			p1.Y = 100;
			Console.WriteLine("P1.x = {0} P1.x = {1}", p1.X, p1.Y);

			// Make a clone.
			CoPointClass p2 = (CoPointClass)p1.Clone();
			Console.WriteLine("P2.x = {0} P2.x = {1}", p2.X, p2.Y);

			// This change should not effect P1.
			p2.X = 500;
			p2.Y = 987;

			Console.WriteLine("P1.x = {0} P1.x = {1}", p1.X, p1.Y);
			Console.WriteLine("P2.x = {0} P2.x = {1}", p2.X, p2.Y);	
		}
	}
}
