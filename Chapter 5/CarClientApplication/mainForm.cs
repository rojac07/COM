using System;
using System.Drawing;
using System.Collections;
using System.ComponentModel;
using System.Windows.Forms;
using System.Data;

namespace CarClientApplication
{
	/// <summary>
	/// Summary description for Form1.
	/// </summary>
	public class MainForm : System.Windows.Forms.Form
	{
		private System.Windows.Forms.Button btnCSharpCars;
		private System.Windows.Forms.Button btnVbNetCars;
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
			this.btnCSharpCars = new System.Windows.Forms.Button();
			this.btnVbNetCars = new System.Windows.Forms.Button();
			this.SuspendLayout();
			// 
			// btnCSharpCars
			// 
			this.btnCSharpCars.BackColor = System.Drawing.SystemColors.Control;
			this.btnCSharpCars.Location = new System.Drawing.Point(16, 24);
			this.btnCSharpCars.Name = "btnCSharpCars";
			this.btnCSharpCars.Size = new System.Drawing.Size(256, 23);
			this.btnCSharpCars.TabIndex = 0;
			this.btnCSharpCars.Text = "Use all the C# Cars";
			this.btnCSharpCars.Click += new System.EventHandler(this.btnCSharpCars_Click);
			// 
			// btnVbNetCars
			// 
			this.btnVbNetCars.BackColor = System.Drawing.SystemColors.Control;
			this.btnVbNetCars.Location = new System.Drawing.Point(16, 64);
			this.btnVbNetCars.Name = "btnVbNetCars";
			this.btnVbNetCars.Size = new System.Drawing.Size(256, 23);
			this.btnVbNetCars.TabIndex = 1;
			this.btnVbNetCars.Text = "Use all the VB .NETCars";
			this.btnVbNetCars.Click += new System.EventHandler(this.btnVbNetCars_Click);
			// 
			// MainForm
			// 
			this.AutoScaleBaseSize = new System.Drawing.Size(5, 13);
			this.BackColor = System.Drawing.Color.FromArgb(((System.Byte)(255)), ((System.Byte)(192)), ((System.Byte)(128)));
			this.ClientSize = new System.Drawing.Size(292, 118);
			this.Controls.AddRange(new System.Windows.Forms.Control[] {
																		  this.btnVbNetCars,
																		  this.btnCSharpCars});
			this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.Fixed3D;
			this.Name = "MainForm";
			this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
			this.Text = "C# Cars Client";
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

		private void btnCSharpCars_Click(object sender, System.EventArgs e)
		{
			// Make array of C# Cars.
			CSharpCarLibrary.Car[] myCars = 
			{
				new CSharpCarLibrary.HotRod("Viper", CSharpCarLibrary.CarColor.Red),
				new CSharpCarLibrary.MiniVan("Clunky", CSharpCarLibrary.CarColor.Green),
				new CSharpCarLibrary.Roadster("Zippy", CSharpCarLibrary.CarColor.Green, 50, 5)
			};

			foreach(CSharpCarLibrary.Car c in myCars)
			{
				// Call each car's ToString()
				MessageBox.Show(c.ToString(), c.GetType().Name);

				// Display each car's bumper sticker.
				c.DisplayBumperStickerText();

				// Do we have a convertible?
				if(c is CSharpCarLibrary.IConvertible)
				{
					CSharpCarLibrary.IConvertible itfConvert;
					itfConvert = (CSharpCarLibrary.IConvertible)c;
					itfConvert.OpenSunRoof(true); 
				}
			}
		}

		private void btnVbNetCars_Click(object sender, System.EventArgs e)
		{
			// Make array of VB .NET Cars.
			VbNetCarLibrary.Car[] myCars = 
			{
				new VbNetCarLibrary.HotRod("Viper", VbNetCarLibrary.CarColor.Red),
				new VbNetCarLibrary.MiniVan("Clunky", VbNetCarLibrary.CarColor.Green),
				new VbNetCarLibrary.Roadster("Zippy", VbNetCarLibrary.CarColor.Green, 50, 5)
			};

			foreach(VbNetCarLibrary.Car c in myCars)
			{
				// Call each car's ToString()
				MessageBox.Show(c.ToString(), c.GetType().Name);

				// Display each car's bumper sticker.
				c.DisplayBumperStickerText();

				// Do we have a convertible?
				if(c is VbNetCarLibrary.IConvertible)
				{
					VbNetCarLibrary.IConvertible itfConvert;
					itfConvert = (VbNetCarLibrary.IConvertible)c;
					itfConvert.OpenSunRoof(true); 
				}
			}
		}
	}
}
