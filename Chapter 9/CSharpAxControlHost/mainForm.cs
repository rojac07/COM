using System;
using System.Drawing;
using System.Collections;
using System.ComponentModel;
using System.Windows.Forms;
using System.Data;

namespace CSharpAxControlHost
{
	/// <summary>
	/// Summary description for Form1.
	/// </summary>
	public class mainForm : System.Windows.Forms.Form
	{
		private System.Windows.Forms.TextBox txtMessage;
		private System.Windows.Forms.Button btnSetCtrlText;
		private AxSimpleVb6AxCtrl.AxLameColorControl axLameColorControl1;
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
			System.Resources.ResourceManager resources = new System.Resources.ResourceManager(typeof(mainForm));
			this.txtMessage = new System.Windows.Forms.TextBox();
			this.btnSetCtrlText = new System.Windows.Forms.Button();
			this.axLameColorControl1 = new AxSimpleVb6AxCtrl.AxLameColorControl();
			((System.ComponentModel.ISupportInitialize)(this.axLameColorControl1)).BeginInit();
			this.SuspendLayout();
			// 
			// txtMessage
			// 
			this.txtMessage.Location = new System.Drawing.Point(128, 216);
			this.txtMessage.Name = "txtMessage";
			this.txtMessage.Size = new System.Drawing.Size(176, 20);
			this.txtMessage.TabIndex = 1;
			this.txtMessage.Text = "Hello there...";
			// 
			// btnSetCtrlText
			// 
			this.btnSetCtrlText.Location = new System.Drawing.Point(16, 216);
			this.btnSetCtrlText.Name = "btnSetCtrlText";
			this.btnSetCtrlText.Size = new System.Drawing.Size(75, 40);
			this.btnSetCtrlText.TabIndex = 2;
			this.btnSetCtrlText.Text = "Set Control Text";
			this.btnSetCtrlText.Click += new System.EventHandler(this.btnSetCtrlText_Click);
			// 
			// axLameColorControl1
			// 
			this.axLameColorControl1.Enabled = true;
			this.axLameColorControl1.Location = new System.Drawing.Point(8, 8);
			this.axLameColorControl1.Name = "axLameColorControl1";
			this.axLameColorControl1.OcxState = ((System.Windows.Forms.AxHost.State)(resources.GetObject("axLameColorControl1.OcxState")));
			this.axLameColorControl1.Size = new System.Drawing.Size(291, 175);
			this.axLameColorControl1.TabIndex = 3;
			// 
			// mainForm
			// 
			this.AutoScaleBaseSize = new System.Drawing.Size(5, 13);
			this.ClientSize = new System.Drawing.Size(320, 270);
			this.Controls.AddRange(new System.Windows.Forms.Control[] {
																		  this.axLameColorControl1,
																		  this.btnSetCtrlText,
																		  this.txtMessage});
			this.Name = "mainForm";
			this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
			this.Text = "C# ActiveX Control Client";
			((System.ComponentModel.ISupportInitialize)(this.axLameColorControl1)).EndInit();
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

		private void btnSetCtrlText_Click(object sender, System.EventArgs e)
		{
			axLameColorControl1.TheText = txtMessage.Text;
		}

		private void axLameColorControl1_TextChangedEvent(object sender, System.EventArgs e)
		{
			MessageBox.Show("The text has changed!");
		}
	}
}
