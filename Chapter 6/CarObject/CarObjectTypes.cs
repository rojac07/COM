using System;
using System.Text;

namespace CarObject
{
	#region The car class
	public class SimpleCar : object
	{
		private string mPetName;
		private string mColor;
		private int mCurrSpeed;
		
		public SimpleCar(string petname, string color, int sp)
		{
			mPetName = petname; 
			mColor = color;
			mCurrSpeed = sp;
		}
		public SimpleCar(){}

		public override string ToString()
		{
			StringBuilder sb = new StringBuilder();
			sb.AppendFormat("[Pet Name: {0}, ", mPetName);
			sb.AppendFormat("Color: {0}, ", mColor);
			sb.AppendFormat("Current Speed: {0}]", mCurrSpeed);
			return sb.ToString();
		}

		public override bool Equals(object obj)
		{
			// Test values.
			if((((SimpleCar)obj).mColor == this.mColor) &&
				(((SimpleCar)obj).mCurrSpeed == this.mCurrSpeed) &&
				(((SimpleCar)obj).mPetName == this.mPetName)) 
				return true;
			else
				return false;
		}

		public override int GetHashCode()
		{
			return mPetName.GetHashCode();			
		}
	}
	#endregion 

	class CarTester
	{
		[STAThread]
		static void Main(string[] args)
		{
			SimpleCar car = new SimpleCar("Mel", "Yellow", 40);
			Console.WriteLine(car);

			// Test object refs.
			SimpleCar carRef = car;
			Console.WriteLine("Are Car and carRef pointing to same car? : {0}", 
				               object.ReferenceEquals(car, carRef)); 
			
			// Compare refs.
			SimpleCar car2 = new SimpleCar("Hank", "Pink", 90);
			Console.WriteLine("Are car and car2 pointing to same car? : {0}", 
				object.ReferenceEquals(car, car2));

			// Compare state?
 			SimpleCar car3 = new SimpleCar("Hank", "Pink", 90);
			Console.WriteLine("Do car and car3 contain same state ? : {0}", 
				object.Equals(car2, car3));

			Console.WriteLine("Do car and car3 contain same state ? : {0}", 
				car2.Equals(car3));				 
 		}
	}
}
