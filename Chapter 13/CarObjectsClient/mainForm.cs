using System;
using System.Drawing;
using System.Collections;
using System.ComponentModel;
using System.Windows.Forms;
using System.Data;
using ConfiguredCarObjects;
using System.EnterpriseServices;

namespace CarObjectsClient
{
	/// <summary>
	/// Summary description for Form1.
	/// </summary>
	public class mainForm : System.Windows.Forms.Form
	{
		private System.Windows.Forms.Button btnUpdate;
		private System.Windows.Forms.TextBox txtMake;
		private System.Windows.Forms.Label label2;
		private System.Windows.Forms.Label label3;
		private System.Windows.Forms.TextBox txtColor;
		private System.Windows.Forms.Button btnBuyCar;
		private System.Windows.Forms.DataGrid carDataGrid;
		/// <summary>
		/// Required designer variable.
		/// </summary>
		private System.ComponentModel.Container components = null;
		private System.Windows.Forms.TextBox txtID;
		private System.Windows.Forms.Label label4;
		private System.Windows.Forms.TextBox txtBuyCarID;

		CarInventory ci = new CarInventory();

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
			this.carDataGrid = new System.Windows.Forms.DataGrid();
			this.btnUpdate = new System.Windows.Forms.Button();
			this.txtMake = new System.Windows.Forms.TextBox();
			this.label2 = new System.Windows.Forms.Label();
			this.label3 = new System.Windows.Forms.Label();
			this.txtColor = new System.Windows.Forms.TextBox();
			this.btnBuyCar = new System.Windows.Forms.Button();
			this.txtBuyCarID = new System.Windows.Forms.TextBox();
			this.txtID = new System.Windows.Forms.TextBox();
			this.label4 = new System.Windows.Forms.Label();
			((System.ComponentModel.ISupportInitialize)(this.carDataGrid)).BeginInit();
			this.SuspendLayout();
			// 
			// carDataGrid
			// 
			this.carDataGrid.AlternatingBackColor = System.Drawing.Color.Silver;
			this.carDataGrid.BackColor = System.Drawing.Color.White;
			this.carDataGrid.CaptionBackColor = System.Drawing.Color.Maroon;
			this.carDataGrid.CaptionFont = new System.Drawing.Font("Tahoma", 8F);
			this.carDataGrid.CaptionForeColor = System.Drawing.Color.White;
			this.carDataGrid.CaptionText = "Current Car Inventory";
			this.carDataGrid.DataMember = "";
			this.carDataGrid.Font = new System.Drawing.Font("Tahoma", 8F);
			this.carDataGrid.ForeColor = System.Drawing.Color.Black;
			this.carDataGrid.GridLineColor = System.Drawing.Color.Silver;
			this.carDataGrid.HeaderBackColor = System.Drawing.Color.Silver;
			this.carDataGrid.HeaderFont = new System.Drawing.Font("Tahoma", 8F);
			this.carDataGrid.HeaderForeColor = System.Drawing.Color.Black;
			this.carDataGrid.LinkColor = System.Drawing.Color.Maroon;
			this.carDataGrid.Location = new System.Drawing.Point(16, 16);
			this.carDataGrid.Name = "carDataGrid";
			this.carDataGrid.ParentRowsBackColor = System.Drawing.Color.Silver;
			this.carDataGrid.ParentRowsForeColor = System.Drawing.Color.Black;
			this.carDataGrid.SelectionBackColor = System.Drawing.Color.Maroon;
			this.carDataGrid.SelectionForeColor = System.Drawing.Color.White;
			this.carDataGrid.Size = new System.Drawing.Size(408, 104);
			this.carDataGrid.TabIndex = 0;
			this.carDataGrid.TabStop = false;
			// 
			// btnUpdate
			// 
			this.btnUpdate.Location = new System.Drawing.Point(224, 184);
			this.btnUpdate.Name = "btnUpdate";
			this.btnUpdate.Size = new System.Drawing.Size(112, 23);
			this.btnUpdate.TabIndex = 4;
			this.btnUpdate.Text = "Update Inventory";
			this.btnUpdate.Click += new System.EventHandler(this.btnUpdate_Click);
			// 
			// txtMake
			// 
			this.txtMake.Location = new System.Drawing.Point(104, 184);
			this.txtMake.Name = "txtMake";
			this.txtMake.TabIndex = 3;
			this.txtMake.Text = "";
			// 
			// label2
			// 
			this.label2.Location = new System.Drawing.Point(16, 184);
			this.label2.Name = "label2";
			this.label2.Size = new System.Drawing.Size(64, 23);
			this.label2.TabIndex = 4;
			this.label2.Text = "Make";
			// 
			// label3
			// 
			this.label3.Location = new System.Drawing.Point(16, 144);
			this.label3.Name = "label3";
			this.label3.Size = new System.Drawing.Size(64, 23);
			this.label3.TabIndex = 6;
			this.label3.Text = "Color";
			// 
			// txtColor
			// 
			this.txtColor.Location = new System.Drawing.Point(104, 144);
			this.txtColor.Name = "txtColor";
			this.txtColor.TabIndex = 1;
			this.txtColor.Text = "";
			// 
			// btnBuyCar
			// 
			this.btnBuyCar.Location = new System.Drawing.Point(8, 248);
			this.btnBuyCar.Name = "btnBuyCar";
			this.btnBuyCar.TabIndex = 6;
			this.btnBuyCar.Text = "Buy Car #";
			this.btnBuyCar.Click += new System.EventHandler(this.btnBuyCar_Click);
			// 
			// txtBuyCarID
			// 
			this.txtBuyCarID.Location = new System.Drawing.Point(104, 248);
			this.txtBuyCarID.Name = "txtBuyCarID";
			this.txtBuyCarID.TabIndex = 5;
			this.txtBuyCarID.Text = "";
			// 
			// txtID
			// 
			this.txtID.Location = new System.Drawing.Point(312, 144);
			this.txtID.Name = "txtID";
			this.txtID.TabIndex = 2;
			this.txtID.Text = "";
			// 
			// label4
			// 
			this.label4.Location = new System.Drawing.Point(224, 144);
			this.label4.Name = "label4";
			this.label4.Size = new System.Drawing.Size(64, 23);
			this.label4.TabIndex = 10;
			this.label4.Text = "ID";
			// 
			// Form1
			// 
			this.AutoScaleBaseSize = new System.Drawing.Size(5, 13);
			this.ClientSize = new System.Drawing.Size(440, 286);
			this.Controls.AddRange(new System.Windows.Forms.Control[] {
																		  this.txtID,
																		  this.label4,
																		  this.txtBuyCarID,
																		  this.btnBuyCar,
																		  this.txtColor,
																		  this.label3,
																		  this.txtMake,
																		  this.label2,
																		  this.btnUpdate,
																		  this.carDataGrid});
			this.Name = "Form1";
			this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
			this.Text = "C# Car Object Client";
			this.Load += new System.EventHandler(this.Form1_Load);
			((System.ComponentModel.ISupportInitialize)(this.carDataGrid)).EndInit();
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

		private void btnUpdate_Click(object sender, System.EventArgs e)
		{
			try
			{
				ci.AddCar(txtMake.Text, txtColor.Text, Int32.Parse(txtID.Text));
				UpdateGrid();
			}
			catch(Exception ex)
			{
				MessageBox.Show(ex.Message);
			}
		}

		private void btnBuyCar_Click(object sender, System.EventArgs e)
		{
			try 
			{
				ci.BuyCar(Int32.Parse(txtBuyCarID.Text));
				UpdateGrid();
			}
			catch(Exception ex)
			{
				MessageBox.Show(ex.Message);
			}
		}

		private void Form1_Load(object sender, System.EventArgs e)
		{
			UpdateGrid();
		}

		private void UpdateGrid()
		{
			carDataGrid.DataSource = ci.GetAllInventory().Tables["Inventory"];
		}
	}
}
