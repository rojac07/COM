using System;
using VBSafeArrayServer;
using System.Runtime.InteropServices;

namespace CSharpSafeArrayClient
{
	class SafeArrayClient
	{
		[STAThread]
		static void Main(string[] args)
		{
			// Interact with the SAFEARRAY functions.
			SafeArrayObjClass saObj = new SafeArrayObjClass();

			// Send in strings (take one).
			Console.WriteLine("Calling SafeArrayObjClass.SendMeAnArrayOfStrings()");
			Array strData = Array.CreateInstance(typeof(string), 4); 
			strData.SetValue("Hello", 0);
			strData.SetValue("there", 1);
			strData.SetValue("from", 2);
			strData.SetValue("C#!", 3);
			saObj.SendMeAnArrayOfStrings(ref strData);
			
			// Send in strings (take two).
			Console.WriteLine("Calling SafeArrayObjClass.SendMeAnArrayOfStrings()");
			string[] theStringData = {"Hello", "there", "from", "C#!"};
			Array temp = theStringData; 
			saObj.SendMeAnArrayOfStrings(ref temp);

			// Bad!  Compile time errors.
			// string[] moreStrs = {"too", "bad", "this", "bombs..."};
			// saObj.SendMeAnArrayOfStrings(ref moreStrs);
		    // saObj.SendMeAnArrayOfStrings(ref (System.Array)moreStrs);

			// Get the ints from the coclass. 
			Console.WriteLine("Calling SafeArrayObjClass.GiveMeAnArrayOfInts()\n");
			Array theInts = saObj.GiveMeAnArrayOfInts();
			Console.WriteLine("Data from COM type:");
			for(int i = 0; i < theInts.Length; i++)
				Console.WriteLine("Int data {0} is {1}", i, theInts.GetValue(i));

			// Now that we have the ints, manipulate the items.
			Console.WriteLine("\nReversed Int array!");
			Array.Reverse(theInts); 
			for(int i = 0; i < theInts.Length; i++)
				Console.WriteLine("Int data {0} is {1}", i, theInts.GetValue(i));
			
			Console.WriteLine("\nSorted Int array!");
			Array.Sort(theInts);
			for(int i = 0; i < theInts.Length; i++)
				Console.WriteLine("Int data {0} is {1}", i, theInts.GetValue(i));

			// Get array of _TestObject interfaces
			Console.WriteLine("\nCalling SafeArrayObjClass.GiveMeAnArrayOfCoClasses()\n");
			Array theTestobjects = saObj.GiveMeAnArrayOfCoClasses();
			for(int i = 0; i < theTestobjects.Length; i++)
				Console.WriteLine("Test object {0}'s string data: {1}", i,
				    ((TestObjectClass)theTestobjects.GetValue(i)).StringData);

			// Get the variants.
			Console.WriteLine("\nCalling SafeArrayObjClass.GiveMeAnArrayOfVariants()\n");
			Array theVariants = saObj.GiveMeAnArrayOfVariants();
			for(int i = 0; i < theVariants.Length; i++)
			{
				Console.WriteLine("VARIANT number {0}'s data: {1}", i,
					theVariants.GetValue(i));			
				
				// Do we have an _TestObject interface?
				if(theVariants.GetValue(i).GetType() == typeof(VBSafeArrayServer.TestObjectClass))
					Console.WriteLine("  -> Data of object is {0}",
						((TestObjectClass)theVariants.GetValue(i)).StringData );
			}
			Console.WriteLine();
		}
	}
}
