using System;
using System.Drawing;
using System.Collections;
using System.ComponentModel;
using System.Windows.Forms;
using System.Data;
using Vb6CarServer;

namespace CSharpVBComServerClient
{
	/// <summary>
	/// Summary description for Form1.
	/// </summary>
	public class MainForm : System.Windows.Forms.Form
	{
		private System.Windows.Forms.Button btnUseVb6ComCar;
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
			this.btnUseVb6ComCar = new System.Windows.Forms.Button();
			this.SuspendLayout();
			// 
			// btnUseVb6ComCar
			// 
			this.btnUseVb6ComCar.Location = new System.Drawing.Point(16, 24);
			this.btnUseVb6ComCar.Name = "btnUseVb6ComCar";
			this.btnUseVb6ComCar.Size = new System.Drawing.Size(264, 23);
			this.btnUseVb6ComCar.TabIndex = 0;
			this.btnUseVb6ComCar.Text = "Use VB 6.0 COM Car";
			this.btnUseVb6ComCar.Click += new System.EventHandler(this.btnUseVb6ComCar_Click);
			// 
			// MainForm
			// 
			this.AutoScaleBaseSize = new System.Drawing.Size(5, 13);
			this.ClientSize = new System.Drawing.Size(292, 86);
			this.Controls.AddRange(new System.Windows.Forms.Control[] {
																		  this.btnUseVb6ComCar});
			this.Name = "MainForm";
			this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
			this.Text = "C# VB 6.0 COM Server Client";
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

		private void btnUseVb6ComCar_Click(object sender, System.EventArgs e)
		{
			// Use the COM server.
			CoCarClass vbComCar = new CoCarClass();
			vbComCar.TurboBlast();
			vbComCar.Speed = 20;
			MessageBox.Show(vbComCar.Speed.ToString(), "Speed of VB 6.0 Car is:");
		}
	}
}
