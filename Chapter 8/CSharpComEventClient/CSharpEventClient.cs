using System;
using VBComEventsServer;

namespace CSharpComEventClient
{
	#region The Sink
	// A strongly typed event sink.
	// It is **optional** to derive 
	// from the __CoCar interface. 
	class CSharpEventSink : __CoCar
	{
		public void AboutToBlow()
		{ Console.WriteLine("->Dude!  Slow down!");}

		public void Exploded()
		{Console.WriteLine("->You're toast...");}
	}
	#endregion

	#region An Example Event object
	class ExampleDotNetEventType : __CoCar_Event
	{
		// Delegates for the __CoCar_Event interface.
		public event __CoCar_AboutToBlowEventHandler AboutToBlow;
		public event __CoCar_ExplodedEventHandler Exploded;

		public void FireTheEvents()
		{
			//...
		}
	}
	#endregion

	class CSharpEventClient
	{
		[STAThread]
		static void Main(string[] args)
		{
			// First, create the CoCar.
			CoCarClass car = new CoCarClass();

			// Make the sink.
			CSharpEventSink sink = new CSharpEventSink();

			// Now hook the events to the correct sink method.
			car.AboutToBlow += 
				new __CoCar_AboutToBlowEventHandler(sink.AboutToBlow);
			car.Exploded += 
				new __CoCar_ExplodedEventHandler(sink.Exploded);

			// Finally, work the car and trigger the events.
			for(int i = 0; i < 20; i++)
				Console.WriteLine("Current speed: {0}", car.SpeedUp());			 
		}
	}
}
