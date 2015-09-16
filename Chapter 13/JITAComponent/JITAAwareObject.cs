using System;
using System.EnterpriseServices;
using System.Windows.Forms;
using System.Runtime.InteropServices;

namespace JITAComponent
{
	[JustInTimeActivation(true)]
	[ClassInterface(ClassInterfaceType.AutoDual)]
	[EventTrackingEnabled(true)]
	public class JITAAwareObject : ServicedComponent
	{				
		private Random r = new Random();
		public JITAAwareObject()
		{
			// Allocate object into memory...
			MessageBox.Show("Memory Allocated!", 
							"Default constructor");		
		}
		
		~JITAAwareObject()
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
			return false;
		}

		public void MethodA()
		{
			// MTS style JITA.
			if(DoSomeWork())
				// Happy and done.
				ContextUtil.SetComplete();
			else
				// Done but not happy.
				ContextUtil.SetAbort();
		}

		public void MethodB()
		{
			// COM+ style JITA.
			if(DoSomeWork())
				// Done!
				ContextUtil.DeactivateOnReturn = true;
			else
				// Not done!
				ContextUtil.DeactivateOnReturn = false;
		}
		
		[AutoComplete(true)]
		public void MethodC()
		{
			// This will always set the done bit to true.
			DoSomeWork();
		}
		
		// Work simulation.
		private bool DoSomeWork()
		{	
			if(r.Next(1) == 0)
				return false;
			else
				return true;
		}
	}
}
