using System;
using System.Collections;
using System.Runtime.InteropServices;

namespace DotNetCollection
{
	// Custom exceptions are of little
	// use to COM, as they will be 
	// mapped into IErrorInfo equipped
	// COM error object.
	[ComVisible(false)]
	public class BoneHeadUserException 
		: System.Exception
	{
		public override string Message
		{
			get { return "Hey bonehead, count your cars first!";}
		}
	}


	// This class implements IEnumerable.
	[ClassInterface(ClassInterfaceType.AutoDual)]
	[Guid("7802A4A0-9F7F-401a-B7A0-80B65DE2E107")]
	public class CarCollection : IEnumerable
	{
		public CarCollection()
		{
			ar.Add(new Car("Ford", "Red", "Joe"));
			ar.Add(new Car("BMW", "Silver", "Fred"));
			ar.Add(new Car("Yugo", "Rust", "Clunker"));
		}

		// List of items.
		private ArrayList ar = new ArrayList();

		public IEnumerator GetEnumerator()
		{return ar.GetEnumerator();}

		public void AddCar(Car c)
		{ar.Add(c);}

		public void RemoveCar(int index)
		{
			try
			{
				ar.RemoveAt(index);
			}
			catch
			{ throw new BoneHeadUserException();}
		}

		public void ClearCars()
		{ar.Clear();}
	}

	[ClassInterface(ClassInterfaceType.AutoDual)]
	[Guid("98B815E2-D3A8-455d-82EA-0D8F82D16CC8")]
	public class Car
	{
		private string make;
		private string color;
		private string petName;
		public Car(){}  
		public Car(string m, string c, string pn)
		{ make = m; color = c; petName = pn;}

		public void SetCarState(string m, string c, string pn)
		{ make = m; color = c; petName = pn;}

		public string GetCarState()
		{ 
			return string.Format("Make: {0} Color: {1} PetName: {2}", 
				make, color, petName);
		}
	}
}
