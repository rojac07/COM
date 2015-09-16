using System;
using System.Windows.Forms;

namespace ComplexTypeLibrary
{
	// The custom attribute.
	[AttributeUsage(AttributeTargets.Class |
	 AttributeTargets.Interface |
	 AttributeTargets.Enum |
	 AttributeTargets.Struct)]
	public class ToDoAttribute : System.Attribute
	{
		private string toDoComment;

		public ToDoAttribute(string comment)
		{ toDoComment = comment;}
		
		public string Comment
		{get {return toDoComment;}}
	}

	// A class.
	[ObsoleteAttribute("This class is useless.  Use anything else")] 
	[ToDo("Make this class do something!")]
	public class SimpleClass{}

	namespace TheTypes
	{
		// An enum.
		[ToDo("This enum stinks!")]
		public enum TheEnum
		{FieldA, FieldB}

		// Interfaces.
		[ToDo("Lame-o name for an interface!")]
		public interface IFaceOne
		{
			string ReadOnlyProp{get;}
			string WriteOnlyProp{set;}
			TheEnum ReadWriteProp{get; set;}
		}

		public interface IFaceTwo
		{
			// Uncomment to issue compiler error.
			// [ToDo("Document this method...")]
			int SimpleMethod();
		}

		// A struct implementing an interface.
		public struct TheStruct : IFaceTwo
		{
			public int SimpleMethod(){return 0;}
		}

		// The nesting class
		public class TheNestingClass
		{
			public TheNestingClass(){}

			// A nested class, with one property.
			public class TheNestedClass
			{
				private string someStrVal = "I'm nested!";
				public string GetInternalString()
				{
					return someStrVal;
				}

				public void ShowMessage(string m, short numbOfTimes)
				{	
					string message = "";
					for(short i = 0; i < numbOfTimes; i++)
					{
						message += m;
						message += " ";
					}
					MessageBox.Show(message);
				}
			}
		}

		[ToDo("Change name of IFaceOneImplClass class")]
		public class IFaceOneImplClass : IFaceOne
		{
			public IFaceOneImplClass()
			{e = TheEnum.FieldB;}

			private TheEnum e;

			public string ReadOnlyProp 
			{get{return "Hey!";}} 

			public string WriteOnlyProp 
			{set {string x = value;}}

			public TheEnum ReadWriteProp
			{
				get{return e;}
				set{e = value;}
			}
		}
	}
}
