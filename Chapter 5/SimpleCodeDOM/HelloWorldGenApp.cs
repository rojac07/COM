using System;
using System.CodeDom;
using System.CodeDom.Compiler;
using Microsoft.CSharp;
using Microsoft.VisualBasic;
using System.IO;
using System.Reflection;

namespace SimpleCodeDOM
{
	/// <summary>
	/// This class builds a simple class in memory
	/// and saves it out as C# and VB.NET syntax.
	/// </summary>
	class HelloCodeGen
	{
		// Access to the code generator.
		private static ICodeGenerator itfCG;

		// Access to the code compiler.
		private static ICodeCompiler itfCC;

		// cs or vb?
		private static string syntaxTarget;
		private static string assemblyName;

		#region Create the File
		// Helper functions.
		private static TextWriter CreateFile(string syntaxTarget)
		{
			string fileName = String.Format("Hello.{0}", syntaxTarget);
			Console.WriteLine ("Creating source file {0}.", fileName);
			TextWriter t = new StreamWriter (new FileStream (fileName, FileMode.Create));
			return t;			
		}
		#endregion

		#region Compile the Code

		private static void CompileCode(ICodeCompiler itfCC, string syntaxTarget)
		{
			// Set assembly name.
			assemblyName = String.Format("Hello{0}Asm", syntaxTarget.ToUpper());

			// Compile the code.
			CompilerParameters parms = new CompilerParameters();
			parms.OutputAssembly = assemblyName + ".dll";
			parms.CompilerOptions = "/t:library /r:System.Windows.Forms.dll";
			
			itfCC.CompileAssemblyFromFile(parms, String.Format("Hello.{0}", syntaxTarget));
		}
		#endregion

		#region Load and Run Assembly

		private static void LoadAndRunAsm(string msg)
		{
			// Load the assembly.
			AppDomain ad = AppDomain.CreateDomain("HelloAppDomain");
			Assembly a = ad.Load(assemblyName);
			
			// Get the Hello type.
			Type helloClass = a.GetType("SimpleCodeDOMHelloClass.HelloClass");

			// Create the helloClass on the fly.
			object obj = Activator.CreateInstance(helloClass);

			// Set message property.
			PropertyInfo pi = helloClass.GetProperty("Message");
			MethodInfo mi = pi.GetSetMethod(true); 
			mi.Invoke(obj, new object[]{msg});
			
			// Display message!
			mi = helloClass.GetMethod("Display");
			mi.Invoke(obj, null);
		}
		#endregion

		#region Build CodeDOM nodes
		private static void PopulateNamespace(ICodeGenerator itfCG, TextWriter w)
		{
			// Add a code comment.
			CodeCommentStatement c = new CodeCommentStatement("This is the wicked cool Hello class");
			itfCG.GenerateCodeFromStatement(c, w, null);

			// Build root namespace.
			CodeNamespace cnamespace = new CodeNamespace("SimpleCodeDOMHelloClass");

			// Reference other namespaces.
			cnamespace.Imports.Add(new CodeNamespaceImport ("System") );
			cnamespace.Imports.Add(new CodeNamespaceImport ("System.Windows.Forms") );

			// Insert the HelloClass.
			CodeTypeDeclaration co = new CodeTypeDeclaration ("HelloClass");
			co.IsClass = true;
			cnamespace.Types.Add(co);
			co.BaseTypes.Add (typeof (System.Object) );
			co.TypeAttributes  = TypeAttributes.Public;

			// Make a custom construcor.
			CodeConstructor ctor = new CodeConstructor();
			ctor.Attributes = MemberAttributes.Public;
			ctor.Parameters.Add(new CodeParameterDeclarationExpression 
				(new CodeTypeReference(typeof(string)), "msg"));
			ctor.Statements.Add((new CodeAssignStatement(new CodeArgumentReferenceExpression("mMsg"), 
				new CodeArgumentReferenceExpression("msg"))));
			co.Members.Add(ctor);

			// Add the default construcor.
			ctor = new CodeConstructor();
			ctor.Attributes = MemberAttributes.Public;
			co.Members.Add(ctor);

			// Insert a String field (mMsg).
			CodeMemberField cf = new CodeMemberField("System.String", "mMsg");
			cf.Comments.Add(new CodeCommentStatement("The state data..."));
			cf.Attributes = MemberAttributes.Private;
			co.Members.Add(cf);

			// Add the Message property.
			CodeMemberProperty  cp = new CodeMemberProperty();
			cp.Name = "Message";
			cp.Attributes = MemberAttributes.Public | MemberAttributes.Final ;
			cp.Type = new CodeTypeReference("System.String");
			cp.Comments.Add(new CodeCommentStatement("The Message property"));
			// Getter.
			cp.GetStatements.Add(new CodeMethodReturnStatement
				(new CodeFieldReferenceExpression(new CodeThisReferenceExpression(), "mMsg")));
			// Setter.
			cp.SetStatements.Add(new CodeAssignStatement(new CodeArgumentReferenceExpression("mMsg"), 
				new CodeArgumentReferenceExpression("value")));
			co.Members.Add (cp);
			
			// Add the Display() message.
			CodeMemberMethod cm = new CodeMemberMethod();
			cm.Name = "Display";
			cm.Attributes = MemberAttributes.Public | MemberAttributes.Final ;
			cm.Comments.Add(new CodeCommentStatement("Show 'em what we got!"));
			cm.Statements.Add (new CodeMethodInvokeExpression 
				(new CodeTypeReferenceExpression("MessageBox"), "Show", 
				new CodeExpression []
				{new CodeArgumentReferenceExpression  ("mMsg")}));
        	co.Members.Add(cm);

			// Generate the code!
			itfCG.GenerateCodeFromNamespace (cnamespace, w, null);
		}
		#endregion

		[STAThread]
		static void Main(string[] args)
		{
			// Prompt for target language.
			Console.Write("Do you want to generate C# or VB .NET code? ");
			syntaxTarget = Console.ReadLine();

			// Get ICodeGenerator interface.
			switch(syntaxTarget.ToUpper())
			{
				case "C#":
				case "CSharp":
				case "CS":
					syntaxTarget = "cs";
					CSharpCodeProvider cdp = new CSharpCodeProvider();
					itfCG = cdp.CreateGenerator();
					itfCC = cdp.CreateCompiler();
				break;
				case "VB .NET":
				case "VB.NET":
				case "VB":
					syntaxTarget = "vb";
					VBCodeProvider vbdp = new VBCodeProvider();
					itfCG = vbdp.CreateGenerator();
					itfCC = vbdp.CreateCompiler();
				break;
				default:
					Console.WriteLine("Sorry...can't do it...");
					syntaxTarget = null;
				break;
			}

			// Only proceed if they picked a valid language 
			// supported by System.CodeDOM.  
			if(syntaxTarget != null)
			{
				// Now create the file and generate the code!
				TextWriter txtWriter = CreateFile(syntaxTarget);
				PopulateNamespace(itfCG, txtWriter);
				txtWriter.Close();
				Console.WriteLine("Done!");

				// Now compile the code into a .NET DLL.
				Console.WriteLine("Compiling code...");
				CompileCode(itfCC, syntaxTarget);

				// Now launch the application!
				Console.Write("Enter your message: ");
				string msg = Console.ReadLine();
				LoadAndRunAsm(msg);
				Console.WriteLine("Thanks for playing...");
			}
		}
	}
}
