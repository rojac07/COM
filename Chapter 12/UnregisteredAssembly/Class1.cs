using System;
using System.Runtime.InteropServices;

namespace UnregisteredAssembly
{
	[ClassInterface(ClassInterfaceType.AutoDual)]
	public class AnotherAdder
	{
		public AnotherAdder(){}
		public int Add(int x, int y)
		{ return x + y;}
	}
}
