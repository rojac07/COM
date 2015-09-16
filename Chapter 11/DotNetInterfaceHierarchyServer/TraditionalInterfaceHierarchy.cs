using System;
using System.Runtime.InteropServices;

namespace TraditionalInterfaceHierarchy
{
	[InterfaceType(ComInterfaceType.InterfaceIsIUnknown)] 
	[Guid("54E46D63-C1E7-4f62-9EE2-939B17394D9E")]
	public interface ICar
	{
		void Start();
		void Stop();
	}

	[InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]
	[Guid("C04D9BBE-AF00-473d-93E8-1F04E3AF197E")]
	public interface ISportsCar : ICar
	{
		// From ICar
		new void Start();
		new void Stop();

		void TurboBoost();
	}

	[InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]
	[Guid("07482652-2B4F-40da-B8A1-CFA9AAB51D64")]
	public interface IJamesBondCar : ISportsCar
	{
		// From ICar.
		new void Start();
		new void Stop();

		// From ISportsCar
		new void TurboBoost();

		void Fly();
		void DiveUnderWater();
		void DrillThroughMountain();
	}

	[ClassInterface(ClassInterfaceType.AutoDual)]
	[Guid("75216084-42F8-4d0e-9644-D4E545882D5E")]
	public class SuperCar : IJamesBondCar
	{
		public SuperCar(){}

		// Some impl...
		public void Start(){}
		public void Stop(){}
		public void TurboBoost(){}
		public void Fly(){}
		public void DiveUnderWater(){}
		public void DrillThroughMountain(){}
	}
}