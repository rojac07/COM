using System;
using System.Runtime.InteropServices;
using System.Windows.Forms;

namespace MySimpleDotNetServer
{
	public class Foo
	{
		// Constructors are not published to 
		// the COM type library, but all
		// .NET types exposed to COM must
		// support a default ctor.
		public Foo(){InitFoo();}
		public Foo(int x){InitFoo();}
		public Foo(string s){InitFoo();}

		// Helper function for ctors.
		private void InitFoo(){}

		// C# style destructor
		~Foo(){}

		// These will be published.
		public void A(){}

		// This will NOT be published.
		[ComVisible(false)]
		public int B(int x){return x++;}

		// These will not be published.
		private void HelperFunction(){}
		protected void HelperFunctionForDerivedTypes(){}

		// Static members not published to the generated type library.
		public static int FooObjCounter = 0; 
		public static int GetNumbOfFooObjs()
		{ return FooObjCounter;}
	} 

	// This will not be placed in the *.tlb file,
	// but is visible to other .NET assemblies. 
	[ComVisible(false)]
	public interface IBar{}

	// Abstract types should not be listed in a COM type library!
	[ComVisible(false)]  	 
	public abstract class TheAbstractBaseClass
	{     
		public TheAbstractBaseClass(){}	 
	}

	[ComVisible(false)]
	public abstract class TheParentClass
	{
		[ComVisible(false)]
		public abstract void YouMustDealWithThis();
		
		public virtual void YouCanChangeThis()
		{ MessageBox.Show("Default impl of YouCanChangeThis()");}

		public void A(){}
		public void B(){}
		public void C(){}
		public void D(){}
	}

	[ClassInterface(ClassInterfaceType.AutoDual)]
	public class DerivedClass : TheParentClass
	{
		public override void YouMustDealWithThis()
		{ MessageBox.Show("Fine...happy now?");}
		
		public override void YouCanChangeThis()
		{ 
			MessageBox.Show("I added this functionality!");
			base.YouCanChangeThis();
		}
	}

	[ComVisible(true)]
	[ClassInterface(ClassInterfaceType.AutoDual)]
	public class BasicTypeMembers
	{
		private string mStrValue;

		// A constant value.
		public const double PI = 3.14;

		// .NET Properties.
		public string StringValue
		{
			get{return mStrValue;}
			set{mStrValue = value;}
		}

		// .NET Fields.
		public int mIntField;
		public bool mBooleanField;

		// Methods.
		public void A(){} 
		public int B(int x){return x++;}
		public void C(ref int x){x++;}
		public void D(out int x){x = 1000;}

		// Preserving a signature.
		[PreserveSig] public string MemberOfDispInterface()
		{ return "You should never need to do this...";}


		// Methods with explicit params.
		public int B2([In]int x){return x++;}
		public void C2([In][Out]ref int x){x++;}
		public void D2([Out]out int x){x = 1000;}
	}
}
