using System;
using System.Runtime.InteropServices;

namespace DotNetInterfaceMultiBaseHierarchy
{
	[InterfaceType(ComInterfaceType.InterfaceIsIUnknown)] 
	[Guid("294D6CDE-25AE-4948-8D2E-CE8A39EAA781")]
	public interface ICar
	{
		void Start();
		void Stop();
	}

	[InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]
	[Guid("070E86D9-64AF-4f39-A640-2EE690478141")]
	public interface ISportsCar
	{
		void TurboBoost();
	}

	[InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]
	[Guid("ABBF550F-DD00-4eb5-A031-AD74D41F0861")]
	public interface IJamesBondCar : ICar, ISportsCar
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
	[Guid("9776534F-55E7-419d-BE7D-36C993DF6ECF")]
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
