using System;

namespace SimpleCSharpDelegate
{
	// The delegate.
	public delegate void DoneAddingDelegate();

	class Adder
	{		
		// Simple method.
		public int Add(int x, int y)
		{
			return x + y;
		}

		// The delegate target.
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
			DoneAddingDelegate del = new DoneAddingDelegate(a.AddingComplete);
			Console.WriteLine("Delegate target: {0}", del.Target.ToString());
			Console.WriteLine("Delegate method name: {0}", del.Method.Name);
			
			// Trigger the event.
			Console.WriteLine("\nSum of 10 and 10 is: {0}", a.Add(10, 10));
			del.DynamicInvoke(null);
		}
	}
}
