using System;
using System.ComponentModel;

namespace ScratchAssembly
{
	// These two classes are only used to 
	// grab the hex of the strings.
	[IDLCustomAttribute("1403B3A5-38FE-4ba9-94E2-54577F712E7A", 
	"ToDo: Add subtraction functionality...")]
	public class CustomAttString{}

	[DescriptionAttribute("This class adds two numbers")]
	public class AtlAdderClass{}

	// This is a class type which is a .NET
	// representation of the IDL [custom] attribute.
	public class IDLCustomAttribute : Attribute
	{
		public string theGuidName;
		public string theStringValue;
		public IDLCustomAttribute(string g, string s)
		{ 
			theGuidName = g; 
			theStringValue = s;
		}
	}
} 
