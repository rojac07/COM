using System;
using System.Windows.Forms;
using System.Text;

namespace CSharpCarLibrary
{
	/// <summary>
	/// Summary description for Roadster.
	/// </summary>
	public class Roadster : HotRod, IConvertible
	{
		#region Constructors
		public Roadster()
		{}
		public Roadster(string name, CarColor color) 
			: base(name, color)
		{}
		public Roadster(string name, CarColor color, int sp) 
			: base(name, color, sp)
		{}
		public Roadster(string name, CarColor color, int sp, short trunkSpace) 
			: base(name, color, sp)
		{ mTrunkSpace = trunkSpace;}
		#endregion 

		#region Overrides
		public override void SpeedUp()
		{
			mCurrSpeed += 20;
		}
		public override void DisplayBumperStickerText()
		{
			MessageBox.Show("Faster is better...", "C# Car Library");
		}
		public override string ToString()
		{
			StringBuilder sb = new StringBuilder();
			sb.Append(base.ToString()); 
			sb.AppendFormat(" Trunk space: {0}", mTrunkSpace);
			return sb.ToString();
		}
		#endregion

		// IConvertible impl.
		void IConvertible.OpenSunRoof(bool openIt)
		{
			if(openIt)
				MessageBox.Show("Sun roof is open!", "C# Car Library");
			else
				MessageBox.Show("Looking through small plastic window...", "C# Car Library");
		}

		// Custom state data.
		private short mTrunkSpace;
		public short TrunkSpace
		{
			get{return mTrunkSpace;}
			set{mTrunkSpace = value;}
		}
	}
}
