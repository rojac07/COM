using System;
using System.Drawing;
using System.Collections;
using System.ComponentModel;
using System.Windows.Forms;
using System.Text;
using System.Reflection;

namespace DotNetTypeReader
{
	/// <summary>
	/// Summary description for MemberInfoDialog.
	/// </summary>
	public class MemberInfoDialog : System.Windows.Forms.Form
	{
		private Type theType = null;

		private System.Windows.Forms.ListBox lstMembers;
		private System.Windows.Forms.Button btnOK;
		private System.Windows.Forms.Button btnShowParams;
		/// <summary>
		/// Required designer variable.
		/// </summary>
		private System.ComponentModel.Container components = null;

		public MemberInfoDialog()
		{
			//
			// Required for Windows Form Designer support
			//
			InitializeComponent();

			//
			// TODO: Add any constructor code after InitializeComponent call
			//
		}

		public void AddMember(string m)
		{
			lstMembers.Items.Add(m);
		}

		public void SetType(Type t)
		{
			theType = t;
		}

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		protected override void Dispose( bool disposing )
		{
			if( disposing )
			{
				if(components != null)
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
			this.lstMembers = new System.Windows.Forms.ListBox();
			this.btnOK = new System.Windows.Forms.Button();
			this.btnShowParams = new System.Windows.Forms.Button();
			this.SuspendLayout();
			// 
			// lstMembers
			// 
			this.lstMembers.Font = new System.Drawing.Font("Times New Roman", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((System.Byte)(0)));
			this.lstMembers.ItemHeight = 15;
			this.lstMembers.Location = new System.Drawing.Point(8, 24);
			this.lstMembers.Name = "lstMembers";
			this.lstMembers.Size = new System.Drawing.Size(416, 94);
			this.lstMembers.Sorted = true;
			this.lstMembers.TabIndex = 0;
			// 
			// btnOK
			// 
			this.btnOK.DialogResult = System.Windows.Forms.DialogResult.OK;
			this.btnOK.Location = new System.Drawing.Point(344, 144);
			this.btnOK.Name = "btnOK";
			this.btnOK.TabIndex = 1;
			this.btnOK.Text = "Done";
			// 
			// btnShowParams
			// 
			this.btnShowParams.Location = new System.Drawing.Point(16, 144);
			this.btnShowParams.Name = "btnShowParams";
			this.btnShowParams.Size = new System.Drawing.Size(296, 23);
			this.btnShowParams.TabIndex = 2;
			this.btnShowParams.Text = "Show Method Parameters";
			this.btnShowParams.Click += new System.EventHandler(this.btnShowParams_Click);
			// 
			// MemberInfoDialog
			// 
			this.AutoScaleBaseSize = new System.Drawing.Size(5, 13);
			this.ClientSize = new System.Drawing.Size(440, 182);
			this.Controls.AddRange(new System.Windows.Forms.Control[] {
																		  this.btnShowParams,
																		  this.btnOK,
																		  this.lstMembers});
			this.Name = "MemberInfoDialog";
			this.StartPosition = System.Windows.Forms.FormStartPosition.CenterParent;
			this.Text = "MemberInfoDialog";
			this.ResumeLayout(false);

		}
		#endregion

		private void btnShowParams_Click(object sender, System.EventArgs e)
		{
			if(theType != null)
			{
				try
				{
					string memberToExamine = lstMembers.Text;
					StringBuilder sb = new StringBuilder();
					ParameterInfo[] paramInfo = theType.GetMethod(memberToExamine).GetParameters();
					foreach(ParameterInfo pi in paramInfo)
					{
						sb.AppendFormat("Name: {0}, Type: {1} Position: {2}\n",
							pi.Name, pi.ParameterType.ToString(),
							pi.Position);
					}
					  
					MessageBox.Show(sb.ToString(), "Params for: " + lstMembers.Text);
				}
				catch(Exception ex)
				{
					MessageBox.Show(ex.Message, "Error building params!");
				}
			}
		}
	}
}
