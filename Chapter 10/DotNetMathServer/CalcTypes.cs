using System;
using System.Runtime.InteropServices;

namespace DotNetMathServer
{
	// A strongly typed interface for use by COM.
	[InterfaceType(ComInterfaceType.InterfaceIsDual)]
	[Guid("B3D938A2-0B47-469f-BECE-DBD35008EAD8")]
	public interface IBasicMath
	{
		[DispId(1)] int Add(int x, int y);
		[DispId(2)] int Subtract(int x, int y);
	}

	// This interface DOES support a class interface,
	// and contains an overloaded method. 
	[ClassInterface(ClassInterfaceType.AutoDual)]
	[Guid("46933500-E958-48e2-89DA-018A12A43881")]
	public class DotNetCalc
	{
		public DotNetCalc(){}

		public int Add(int x, int y)
		{return x + y;}

		public double Add(double x, double y)
		{return x + y;}

		public int Subtract(int x, int y)
		{return x - y;}
	}

	// This class does NOT support a class interface,
	// but does adjust the ProgID (for the heck of it).
	[ClassInterface(ClassInterfaceType.None)]
	[ProgId("COM2NetExample.DotNetCalcWithInterface")]
	public class DotNetCalcWithInterface : IBasicMath
	{
		public DotNetCalcWithInterface(){}

		public int Add(int x, int y)
		{return x + y;}

		public int Subtract(int x, int y)
		{return x - y;}
	}
}
