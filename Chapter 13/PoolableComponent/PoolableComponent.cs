using System;
using System.EnterpriseServices;
using System.Runtime.InteropServices;
using System.Windows.Forms;

namespace PoolableComponent
{
	[JustInTimeActivation(true)]
	[ClassInterface(ClassInterfaceType.AutoDual)]
	[ObjectPooling(true, 10, 100)]
	[EventTrackingEnabled(true)]
	public class PoolableObject : ServicedComponent
	{
		// Just something to call.
		public void Foo(){}

		public PoolableObject()
		{
			// Allocate object into memory...
			MessageBox.Show("Memory Allocated!", 
				"Default constructor");		
		}
		
		~PoolableObject()
		{
			// Free object from memory...
			MessageBox.Show("Memory reclaimed!", 
				"System.Object.Finalize()");
		}
		
		// IObjectControl members.
		protected override void Activate()
		{
			// Acquire any necessary resources...
			MessageBox.Show("Activating!", 
				"IObjectControl.Activate()");
		}

		protected override void Deactivate()
		{
			// Free any acquired resources...
			MessageBox.Show("Deactivating!", 
				"IObjectControl.Deactivate()");
		}

		protected override bool CanBePooled()
		{
			// Check poolability of this type.
			MessageBox.Show("Deactivating!", 
				"IObjectControl.CanBePooled()");
			return true;
		}	
	}
}
