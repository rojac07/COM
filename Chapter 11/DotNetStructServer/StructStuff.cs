using System;
using System.Runtime.InteropServices;
using System.Windows.Forms;

namespace DotNetStructServer
{
	public struct MYPOINT
	{
		private int xPos;
		private int yPos;

		public void SetPoint(int x, int y)
		{ xPos = x; yPos = y;}
		public void DisplayPoint()
		{MessageBox.Show(String.Format("X: {0} Y: {1}", xPos, yPos));}
	}

	[StructLayout(LayoutKind.Explicit)]
	public struct MyUnion
	{
		[FieldOffset(0)] int a;
		[FieldOffset(0)] int b;
	}

	[ClassInterface(ClassInterfaceType.AutoDual)]
	public class StructUser
	{
		public StructUser(){}

		public void DisplayPointInfo(ref MYPOINT pt)
		{
			pt.DisplayPoint();
		}

		public MYPOINT PointFactory()
		{ 
			MYPOINT pt = new MYPOINT();
			pt.SetPoint(100, 8);
			return pt;
		}
	}
}
