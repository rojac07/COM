using System;

namespace CSharpCarLibrary
{
	/// <summary>
	/// Summary description for MiniVan.
	/// </summary>
	public class MiniVan : Car
	{
		#region Constructors
		public MiniVan()
		{}
		public MiniVan(string name, CarColor color) 
			: base(name, color)
		{}
		public MiniVan(string name, CarColor color, int sp) 
			: base(name, color, sp)
		{}
		#endregion 

		#region Overrides
		// Overrides.
		public override void SpeedUp()
		{
			mCurrSpeed += 10;
		}
		#endregion
	}
}
