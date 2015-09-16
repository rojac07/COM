using System;
using System.Runtime.InteropServices;
using System.Windows.Forms;

namespace DotNetEnumServer
{
	public enum CarMake : byte
	{
		BMW = 10, Dodge = 20,
		Saab = 30, VW = 40, 
		Yugo = 0
	}

	[ClassInterface(ClassInterfaceType.AutoDual)]
	[Guid("F64F79EA-DF4C-48d3-97AF-534A7F197EDD")]
	public class Car
	{
		public Car(){}
		private CarMake mCarMake = CarMake.BMW;

		public CarMake CarMake
		{
			get{return mCarMake;}
			set{mCarMake = value;}
		}

		public void DisplayCarMake(CarMake car)
		{
			MessageBox.Show(car.ToString(), "This car is a:");
		}
	}
}
