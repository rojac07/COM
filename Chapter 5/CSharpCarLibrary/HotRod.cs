using System;
using System.Windows.Forms;

namespace CSharpCarLibrary
{
	/// <summary>
	/// Summary description for HotRod.
	/// </summary>
	public class HotRod : Car, IConvertible
	{
		// IConvertible impl.
		// (using explicit interface impl).
		void IConvertible.OpenSunRoof(bool openIt)
		{
			if(openIt)
				MessageBox.Show("Sun roof is open!", "C# Car Library");
			else
				MessageBox.Show("Closing sun roof...", "C# Car Library");
		}
		
		#region Overrides
		// Overrides.
		public override void SpeedUp()
		{
			base.mCurrSpeed += 20;
		}
		public override void DisplayBumperStickerText()
		{
			MessageBox.Show("Taking names and kickin' butt...", "C# Car Library");
		}		
		#endregion 

		#region Constructors
		public HotRod()
		{}
		public HotRod(string name, CarColor color) 
			: base(name, color)
		{}
		public HotRod(string name, CarColor color, int sp) 
			: base(name, color, sp)
		{}
		#endregion 
	}
}
