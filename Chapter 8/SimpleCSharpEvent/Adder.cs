using System;

namespace SimpleCSharpEvent
{
	// The delegate.
	public delegate void DoneAddingEventHandler();

	class Adder
	{
		// The event.
		public event DoneAddingEventHandler DoneAdding;
		
		// Simple method.
		public int Add(int x, int y)
		{
			// Fire event.
			DoneAdding();
			return x + y;
		}

		// The event sink
		public void AddingComplete()
		{
			Console.WriteLine("The adder is done adding your numbers...");
		}

		[STAThread]
		static void Main(string[] args)
		{
			// Create an adder.
			Adder a = new Adder();

			// Assign a method to the event.
			a.DoneAdding += new DoneAddingEventHandler(a.AddingComplete);

			// Trigger the event.
			Console.WriteLine("Sum of 10 and 10 is: {0}", a.Add(10, 10));
		}
	}
}
