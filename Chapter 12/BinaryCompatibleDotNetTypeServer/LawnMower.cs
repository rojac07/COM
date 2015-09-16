using System;
using interop.AnotherAtlCarServer;
using System.Windows.Forms;
using System.Runtime.InteropServices;

namespace BinaryCompatibleDotNetTypeServer
{
	// This .NET class supports two COM
	// interfaces.
	[ClassInterface(ClassInterfaceType.AutoDual)]
	public class DotNetLawnMower: IStartable, IStoppable
	{
		public DotNetLawnMower(){}

		#region Implementation of IStartable
		public void Start()
		{
			MessageBox.Show("Lawn Mower starting...", "DotNetLawnMower says:");
		}
		#endregion

		#region Implementation of IStoppable
		public void Break()
		{
			MessageBox.Show("Lawn Mower stopping...", "DotNetLawnMower says:");
		}
		#endregion
	}
}
