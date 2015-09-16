using System;
using System.Drawing;
using System.Collections;
using System.ComponentModel;
using System.Windows.Forms;
using System.Data;
using System.Reflection;
using System.Text;

namespace DotNetTypeReader
{
	/// <summary>
	/// Summary description for Form1.
	/// </summary>
	public class MainForm : System.Windows.Forms.Form
	{
		// Reference to the loaded assembly.
		private Assembly theAsm = null;

		private System.Windows.Forms.Label label1;
		private System.Windows.Forms.Label label2;
		private System.Windows.Forms.Label label3;
		private System.Windows.Forms.Label label4;
		private System.Windows.Forms.MainMenu mainMenu1;
		private System.Windows.Forms.MenuItem mnuFile;
		private System.Windows.Forms.MenuItem mnuFileOpen;
		private System.Windows.Forms.MenuItem mnuFileExit;
		private System.Windows.Forms.ListBox lstClasses;
		private System.Windows.Forms.ListBox lstStructs;
		private System.Windows.Forms.ListBox lstEnums;
		private System.Windows.Forms.ListBox lstInterfaces;
		private System.Windows.Forms.MenuItem menuItem1;
		private System.Windows.Forms.MenuItem mnuGetAsmDetails;
		private System.Windows.Forms.MenuItem mnuGetClassMethods;
		private System.Windows.Forms.MenuItem mnuGetStructMethods;
		private System.Windows.Forms.MenuItem mnuGetEnumMethods;
		private System.Windows.Forms.MenuItem mnuGetInterfaceMethods;
		/// <summary>
		/// Required designer variable.
		/// </summary>
		private System.ComponentModel.Container components = null;

		public MainForm()
		{
			//
			// Required for Windows Form Designer support
			//
			InitializeComponent();

			//
			// TODO: Add any constructor code after InitializeComponent call
			//
		}

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		protected override void Dispose( bool disposing )
		{
			if( disposing )
			{
				if (components != null) 
				{
					components.Dispose();
				}
			}
			base.Dispose( disposing );
		}

		#region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		private void InitializeComponent()
		{
			this.label1 = new System.Windows.Forms.Label();
			this.label2 = new System.Windows.Forms.Label();
			this.label3 = new System.Windows.Forms.Label();
			this.label4 = new System.Windows.Forms.Label();
			this.mainMenu1 = new System.Windows.Forms.MainMenu();
			this.mnuFile = new System.Windows.Forms.MenuItem();
			this.mnuFileOpen = new System.Windows.Forms.MenuItem();
			this.mnuFileExit = new System.Windows.Forms.MenuItem();
			this.menuItem1 = new System.Windows.Forms.MenuItem();
			this.mnuGetAsmDetails = new System.Windows.Forms.MenuItem();
			this.mnuGetClassMethods = new System.Windows.Forms.MenuItem();
			this.mnuGetStructMethods = new System.Windows.Forms.MenuItem();
			this.mnuGetEnumMethods = new System.Windows.Forms.MenuItem();
			this.mnuGetInterfaceMethods = new System.Windows.Forms.MenuItem();
			this.lstClasses = new System.Windows.Forms.ListBox();
			this.lstStructs = new System.Windows.Forms.ListBox();
			this.lstEnums = new System.Windows.Forms.ListBox();
			this.lstInterfaces = new System.Windows.Forms.ListBox();
			this.SuspendLayout();
			// 
			// label1
			// 
			this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((System.Byte)(0)));
			this.label1.Location = new System.Drawing.Point(8, 16);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(136, 23);
			this.label1.TabIndex = 0;
			this.label1.Text = "Classes";
			// 
			// label2
			// 
			this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((System.Byte)(0)));
			this.label2.Location = new System.Drawing.Point(8, 232);
			this.label2.Name = "label2";
			this.label2.Size = new System.Drawing.Size(136, 23);
			this.label2.TabIndex = 1;
			this.label2.Text = "Enumerations";
			// 
			// label3
			// 
			this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((System.Byte)(0)));
			this.label3.Location = new System.Drawing.Point(8, 128);
			this.label3.Name = "label3";
			this.label3.Size = new System.Drawing.Size(136, 23);
			this.label3.TabIndex = 2;
			this.label3.Text = "Structures";
			// 
			// label4
			// 
			this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((System.Byte)(0)));
			this.label4.Location = new System.Drawing.Point(8, 336);
			this.label4.Name = "label4";
			this.label4.TabIndex = 3;
			this.label4.Text = "Interfaces";
			// 
			// mainMenu1
			// 
			this.mainMenu1.MenuItems.AddRange(new System.Windows.Forms.MenuItem[] {
																					  this.mnuFile,
																					  this.menuItem1});
			// 
			// mnuFile
			// 
			this.mnuFile.Index = 0;
			this.mnuFile.MenuItems.AddRange(new System.Windows.Forms.MenuItem[] {
																					this.mnuFileOpen,
																					this.mnuFileExit});
			this.mnuFile.Text = "File";
			// 
			// mnuFileOpen
			// 
			this.mnuFileOpen.Index = 0;
			this.mnuFileOpen.Text = "Open Assembly...";
			this.mnuFileOpen.Click += new System.EventHandler(this.mnuFileOpen_Click);
			// 
			// mnuFileExit
			// 
			this.mnuFileExit.Index = 1;
			this.mnuFileExit.Text = "Exit";
			this.mnuFileExit.Click += new System.EventHandler(this.mnuFileExit_Click);
			// 
			// menuItem1
			// 
			this.menuItem1.Index = 1;
			this.menuItem1.MenuItems.AddRange(new System.Windows.Forms.MenuItem[] {
																					  this.mnuGetAsmDetails,
																					  this.mnuGetClassMethods,
																					  this.mnuGetStructMethods,
																					  this.mnuGetEnumMethods,
																					  this.mnuGetInterfaceMethods});
			this.menuItem1.Text = "More Details";
			// 
			// mnuGetAsmDetails
			// 
			this.mnuGetAsmDetails.Enabled = false;
			this.mnuGetAsmDetails.Index = 0;
			this.mnuGetAsmDetails.Text = "Get Assembly Details";
			this.mnuGetAsmDetails.Click += new System.EventHandler(this.mnuGetAsmDetails_Click);
			// 
			// mnuGetClassMethods
			// 
			this.mnuGetClassMethods.Enabled = false;
			this.mnuGetClassMethods.Index = 1;
			this.mnuGetClassMethods.Text = "Get Methods of Selected Class";
			this.mnuGetClassMethods.Click += new System.EventHandler(this.mnuGetClassMethods_Click);
			// 
			// mnuGetStructMethods
			// 
			this.mnuGetStructMethods.Enabled = false;
			this.mnuGetStructMethods.Index = 2;
			this.mnuGetStructMethods.Text = "Get Members of Seleted Structure";
			this.mnuGetStructMethods.Click += new System.EventHandler(this.mnuGetStructMethods_Click);
			// 
			// mnuGetEnumMethods
			// 
			this.mnuGetEnumMethods.Enabled = false;
			this.mnuGetEnumMethods.Index = 3;
			this.mnuGetEnumMethods.Text = "Get Members of Selected Enum";
			this.mnuGetEnumMethods.Click += new System.EventHandler(this.mnuGetEnumMethods_Click);
			// 
			// mnuGetInterfaceMethods
			// 
			this.mnuGetInterfaceMethods.Enabled = false;
			this.mnuGetInterfaceMethods.Index = 4;
			this.mnuGetInterfaceMethods.Text = "Get Members of Selected Interface";
			this.mnuGetInterfaceMethods.Click += new System.EventHandler(this.mnuGetInterfaceMethods_Click);
			// 
			// lstClasses
			// 
			this.lstClasses.Location = new System.Drawing.Point(8, 56);
			this.lstClasses.Name = "lstClasses";
			this.lstClasses.Size = new System.Drawing.Size(408, 56);
			this.lstClasses.TabIndex = 5;
			this.lstClasses.DoubleClick += new System.EventHandler(this.lstClasses_DoubleClick);
			// 
			// lstStructs
			// 
			this.lstStructs.Location = new System.Drawing.Point(8, 160);
			this.lstStructs.Name = "lstStructs";
			this.lstStructs.Size = new System.Drawing.Size(408, 56);
			this.lstStructs.TabIndex = 6;
			this.lstStructs.DoubleClick += new System.EventHandler(this.lstStructs_DoubleClick);
			// 
			// lstEnums
			// 
			this.lstEnums.Location = new System.Drawing.Point(8, 264);
			this.lstEnums.Name = "lstEnums";
			this.lstEnums.Size = new System.Drawing.Size(408, 56);
			this.lstEnums.TabIndex = 7;
			this.lstEnums.DoubleClick += new System.EventHandler(this.lstEnums_DoubleClick);
			// 
			// lstInterfaces
			// 
			this.lstInterfaces.Location = new System.Drawing.Point(8, 368);
			this.lstInterfaces.Name = "lstInterfaces";
			this.lstInterfaces.Size = new System.Drawing.Size(408, 56);
			this.lstInterfaces.TabIndex = 8;
			this.lstInterfaces.DoubleClick += new System.EventHandler(this.lstInterfaces_DoubleClick);
			// 
			// MainForm
			// 
			this.AutoScaleBaseSize = new System.Drawing.Size(5, 13);
			this.ClientSize = new System.Drawing.Size(432, 455);
			this.Controls.AddRange(new System.Windows.Forms.Control[] {
																		  this.lstInterfaces,
																		  this.lstEnums,
																		  this.lstStructs,
																		  this.lstClasses,
																		  this.label4,
																		  this.label3,
																		  this.label2,
																		  this.label1});
			this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.Fixed3D;
			this.Menu = this.mainMenu1;
			this.Name = "MainForm";
			this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
			this.Text = "The C# .NET Type Reader";
			this.ResumeLayout(false);

		}
		#endregion

		/// <summary>
		/// The main entry point for the application.
		/// </summary>
		[STAThread]
		static void Main() 
		{
			Application.Run(new MainForm());
		}

		#region Double click list box handlers
		private void lstClasses_DoubleClick(object sender, System.EventArgs e)
		{
			// Get the current selection.
			string currItem = lstClasses.Text;
			Type t = theAsm.GetType(currItem);
			ShowTypeStats(t);
		}

		private void lstStructs_DoubleClick(object sender, System.EventArgs e)
		{
			// Get the current selection.
			string currItem = lstStructs.Text;
			Type t = theAsm.GetType(currItem);
			ShowTypeStats(t);
		}

		private void lstEnums_DoubleClick(object sender, System.EventArgs e)
		{
			// Get the current selection.
			string currItem = lstEnums.Text;
			Type t = theAsm.GetType(currItem);
			ShowTypeStats(t);
		}

		private void lstInterfaces_DoubleClick(object sender, System.EventArgs e)
		{
			// Get the current selection.
			string currItem = lstInterfaces.Text;
			Type t = theAsm.GetType(currItem);
			ShowTypeStats(t);
		}
		#endregion

		#region Helper Functions
		private void LoadLists(Assembly theAsm)
		{
			// Clear out current listings.
			lstClasses.Items.Clear();
			lstInterfaces.Items.Clear();
			lstEnums.Items.Clear();
			lstStructs.Items.Clear();

			// Get all types in the assembly.
			Type[] theTypes = theAsm.GetTypes();
			
			// Fill each list box.
			foreach(Type t in theTypes)
			{
				if(t.IsClass)
					lstClasses.Items.Add(t.FullName);
				if(t.IsInterface)
					lstInterfaces.Items.Add(t.FullName);
				if(t.IsEnum)
					lstEnums.Items.Add(t.FullName);
				if(t.IsValueType && !t.IsEnum)	// enums are also value types!
					lstStructs.Items.Add(t.FullName);
			}
		}

		private void ShowTypeStats(Type t)
		{
			// Build the stats.
			StringBuilder sb = new StringBuilder();
			sb.AppendFormat("Abstract? : {0}\n", t.IsAbstract);
			sb.AppendFormat("Sealed? : {0}\n", t.IsSealed);
			sb.AppendFormat("Base class? : {0}\n", t.BaseType);
			sb.AppendFormat("Nested Private? : {0}\n", t.IsNestedPrivate);
			sb.AppendFormat("Nested Public? : {0}\n", t.IsNestedPublic);
			sb.AppendFormat("Public Class? : {0}\n", t.IsPublic);

			// Get some specifics for the selected class.
			MessageBox.Show(sb.ToString(), "Type Details for: " + t.FullName);
		}

		private void ShowMemberStats(Type t)
		{
			// Custom dialog to hold the members.
			MemberInfoDialog d = new MemberInfoDialog();
			d.SetType(t);

			// Build the stats.
			StringBuilder sb = new StringBuilder();
			MemberInfo[] allTheMembers = t.GetMembers();

			foreach(MemberInfo mi in allTheMembers)
			{
				d.AddMember(mi.Name);
			}
			d.ShowDialog();

		}
		#endregion

		#region Menu Selction Handlers

		private void mnuFileExit_Click(object sender, System.EventArgs e)
		{
			Application.Exit();
		}

		private void mnuFileOpen_Click(object sender, System.EventArgs e)
		{
			// Show the FileOpen dialog and get file name.
			string fileToLoad = "";

			// Configure look and feel of open dlg.
			OpenFileDialog myOpenFileDialog = new OpenFileDialog();
			myOpenFileDialog.InitialDirectory = ".";
			myOpenFileDialog.Filter = "All files (*.*)|*.*"  ;
			myOpenFileDialog.FilterIndex = 1 ;
			myOpenFileDialog.RestoreDirectory = true ;

			// Do we have a file?
			if(myOpenFileDialog.ShowDialog() == DialogResult.OK)
			{
				fileToLoad = myOpenFileDialog.FileName;
				theAsm = null;
				// Load the assembly.
				theAsm = Assembly.LoadFrom(fileToLoad);
				LoadLists(theAsm);

				// Enable menu items.
				mnuGetAsmDetails.Enabled = true;
				mnuGetClassMethods.Enabled = true;
				mnuGetStructMethods.Enabled = true;
				mnuGetEnumMethods.Enabled = true;
				mnuGetInterfaceMethods.Enabled = true;
			}
		}

		private void mnuGetAsmDetails_Click(object sender, System.EventArgs e)
		{
			if(theAsm != null)
			{
				StringBuilder sb = new StringBuilder();
				sb.AppendFormat("FullName? : {0}\n", theAsm.FullName);
				sb.AppendFormat("Loaded from GAC? : {0}\n", theAsm.GlobalAssemblyCache);
				sb.AppendFormat("Location? : {0}\n", theAsm.Location);
				MessageBox.Show(sb.ToString(), "Assembly Details");
			}		
		}

		private void mnuGetEnumMethods_Click(object sender, System.EventArgs e)
		{
			if(theAsm != null && lstEnums.Text != "")
			{
				// Get the current selection.
				string currItem = lstEnums.Text;
				Type t = theAsm.GetType(currItem);
				ShowMemberStats(t);			
			}
		}

		private void mnuGetInterfaceMethods_Click(object sender, System.EventArgs e)
		{
			if(theAsm != null && lstInterfaces.Text != "")
			{
				// Get the current selection.
				string currItem = lstInterfaces.Text;
				Type t = theAsm.GetType(currItem);
				ShowMemberStats(t);	
			}
		}
		private void mnuGetClassMethods_Click(object sender, System.EventArgs e)
		{
			if(theAsm != null && lstClasses.Text != "")
			{
				// Get the current selection.
				string currItem = lstClasses.Text;
				Type t = theAsm.GetType(currItem);
				ShowMemberStats(t);				
			}
		}

		private void mnuGetStructMethods_Click(object sender, System.EventArgs e)
		{
			if(theAsm != null && lstStructs.Text != "")
			{
				// Get the current selection.
				string currItem = lstStructs.Text;
				Type t = theAsm.GetType(currItem);
				ShowMemberStats(t);			
			}
		}
		#endregion 		

	}
}
