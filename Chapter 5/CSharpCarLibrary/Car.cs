using System;
using System.Text;
using System.Windows.Forms;

namespace CSharpCarLibrary
{
	/// <summary>
	/// Car color enum.
	/// </summary>
	public enum CarColor
	{
		Red, Green, Blue,
		Pink, Yellow, Black
	}

	/// <summary>
	/// Some classes in this library
	/// have a convertible...
	/// </summary>
	public interface IConvertible
	{
		void OpenSunRoof(bool openIt);
	}

	/// <summary>
	/// This is the base class for the autos
	/// in the library.
	/// </summary>
	public abstract class Car
	{
		// Polymorphic interface.
		public abstract void SpeedUp();
		public virtual void DisplayBumperStickerText()
		{
			MessageBox.Show("If you can read this you're too close.", "C# Car Library");
		}

		// State data.
		protected string mPetName;
		protected CarColor mCarColor;
		protected int mCurrSpeed;

		#region Class Constructors
		public Car(){}

		public Car(string name, CarColor color) 
			: this(name, color, 0){}

		public Car(string name, CarColor color, int sp)
		{
			mPetName = name;
			mCarColor = color;
			mCurrSpeed = sp;
		}
		#endregion

		#region Properties
		public string PetName
		{
			get{ return mPetName;}
			set{ mPetName = value;}
		}
		public CarColor Color
		{
			get{ return mCarColor;}
			set{ mCarColor = value;}
		}
		public int Speed
		{get{ return mCurrSpeed;}}
		#endregion

		// Change ToString() for Cars.
		public override string ToString()
		{
			StringBuilder sb = new StringBuilder();
			sb.AppendFormat("[C#] PetName: {0} Color: {1} CurrentSpeed: {2}", 
						    mPetName, mCarColor, mCurrSpeed);
			return sb.ToString();
		}
	}
}
