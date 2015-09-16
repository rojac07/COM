using System;
using System.Drawing;
using System.Collections;
using System.ComponentModel;
using System.Windows.Forms;
using System.Data;
using VBStructsServer;
using WIDGETSERVERLib;

namespace VbArrayOfStructsClient
{
	/// <summary>
	/// Summary description for Form1.
	/// </summary>
	public class mainForm : System.Windows.Forms.Form
	{
		private System.Windows.Forms.Button btnGetArrayOfStructs;
		private System.Windows.Forms.ListBox lstStructs;
		private System.Windows.Forms.Label label1;
		private System.Windows.Forms.Button btnChangeStruct;
		private System.Windows.Forms.Button btnDrawLine;
		/// <summary>
		/// Required designer variable.
		/// </summary>
		private System.ComponentModel.Container components = null;

		public mainForm()
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
			this.btnGetArrayOfStructs = new System.Windows.Forms.Button();
			this.lstStructs = new System.Windows.Forms.ListBox();
			this.label1 = new System.Windows.Forms.Label();
			this.btnChangeStruct = new System.Windows.Forms.Button();
			this.btnDrawLine = new System.Windows.Forms.Button();
			this.SuspendLayout();
			// 
			// btnGetArrayOfStructs
			// 
			this.btnGetArrayOfStructs.Location = new System.Drawing.Point(16, 72);
			this.btnGetArrayOfStructs.Name = "btnGetArrayOfStructs";
			this.btnGetArrayOfStructs.Size = new System.Drawing.Size(264, 23);
			this.btnGetArrayOfStructs.TabIndex = 1;
			this.btnGetArrayOfStructs.Text = "Get the Array of Structs";
			this.btnGetArrayOfStructs.Click += new System.EventHandler(this.btnGetArrayOfStructs_Click);
			// 
			// lstStructs
			// 
			this.lstStructs.Location = new System.Drawing.Point(24, 152);
			this.lstStructs.Name = "lstStructs";
			this.lstStructs.Size = new System.Drawing.Size(248, 95);
			this.lstStructs.TabIndex = 2;
			// 
			// label1
			// 
			this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 11.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((System.Byte)(0)));
			this.label1.Location = new System.Drawing.Point(24, 112);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(240, 23);
			this.label1.TabIndex = 3;
			this.label1.Text = "The COM Structures";
			this.label1.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
			// 
			// btnChangeStruct
			// 
			this.btnChangeStruct.Location = new System.Drawing.Point(96, 272);
			this.btnChangeStruct.Name = "btnChangeStruct";
			this.btnChangeStruct.Size = new System.Drawing.Size(112, 23);
			this.btnChangeStruct.TabIndex = 4;
			this.btnChangeStruct.Text = "Change a Struct";
			this.btnChangeStruct.Click += new System.EventHandler(this.btnChangeStruct_Click);
			// 
			// btnDrawLine
			// 
			this.btnDrawLine.Location = new System.Drawing.Point(64, 16);
			this.btnDrawLine.Name = "btnDrawLine";
			this.btnDrawLine.Size = new System.Drawing.Size(168, 23);
			this.btnDrawLine.TabIndex = 5;
			this.btnDrawLine.Text = "Draw a Line";
			this.btnDrawLine.Click += new System.EventHandler(this.btnDrawLine_Click);
			// 
			// Form1
			// 
			this.AutoScaleBaseSize = new System.Drawing.Size(5, 13);
			this.ClientSize = new System.Drawing.Size(292, 310);
			this.Controls.AddRange(new System.Windows.Forms.Control[] {
																		  this.btnDrawLine,
																		  this.btnChangeStruct,
																		  this.label1,
																		  this.lstStructs,
																		  this.btnGetArrayOfStructs});
			this.Name = "Form1";
			this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
			this.Text = "Array of COM Structs Client";
			this.ResumeLayout(false);

		}
		#endregion

		/// <summary>
		/// The main entry point for the application.
		/// </summary>
		[STAThread]
		static void Main() 
		{
			Application.Run(new mainForm());
		}

		private void btnGetArrayOfStructs_Click(object sender, System.EventArgs e)
		{
			// Get the SAFEARRAY from the COM object.
			VBStructObjectClass  c = new VBStructObjectClass();
			Array s = c.UseThisArrayOfStructs();
			
			// Loop over each member in the array
			// and scrape out the structure data.
			foreach(WidgetStruct ws in s)
			{
				string str = String.Format("Number: {0} Name: {1}",
					ws.ID.ToString(),
					ws.stringName);

				// Plop into Form's listbox.
				lstStructs.Items.Add(str);
			}
		}

		private void btnChangeStruct_Click(object sender, System.EventArgs e)
		{
			// Make and show a WidgetStruct.
			WidgetStruct w;
			w.ID = 9;
			w.stringName = "Fred";
			string str = String.Format("Number: {0} Name: {1}",
				w.ID.ToString(),
				w.stringName);
			MessageBox.Show(str, "WidgetStruct as created");

			// Now pass it in.
			VBStructObjectClass  c = new VBStructObjectClass();
			c.ChangeThisStruct(ref w);

			// Check out the new values.
			str = String.Format("Number: {0} Name: {1}",
				w.ID.ToString(), w.stringName);
			MessageBox.Show(str, "After call");
		}

		private void btnDrawLine_Click(object sender, System.EventArgs e)
		{
			MYPOINT pt1;
			MYPOINT pt2;
			pt1.xPos = 100;
			pt1.yPos = 100;
			pt2.xPos = 400;
			pt2.yPos = 400;

			// Validate base class.
			// (System.ValueType).
			MessageBox.Show(pt1.GetType().BaseType.ToString());

			DrawerClass draw = new DrawerClass();
			draw.DrawALine(ref pt1, ref pt2);
		}
	}
}
