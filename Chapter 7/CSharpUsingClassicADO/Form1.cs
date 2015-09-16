using System;
using System.Drawing;
using System.Collections;
using System.ComponentModel;
using System.Windows.Forms;
using System.Data;

// Make use of clasic ADO.
using ADODB;

namespace CSharpUsingClassicADO
{
	/// <summary>
	/// Summary description for mainForm.
	/// </summary>
	public class mainForm : System.Windows.Forms.Form
	{
		private System.Windows.Forms.Label label1;
		private System.Windows.Forms.DataGrid theDataGrid;
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
			this.theDataGrid = new System.Windows.Forms.DataGrid();
			this.label1 = new System.Windows.Forms.Label();
			((System.ComponentModel.ISupportInitialize)(this.theDataGrid)).BeginInit();
			this.SuspendLayout();
			// 
			// theDataGrid
			// 
			this.theDataGrid.DataMember = "";
			this.theDataGrid.HeaderForeColor = System.Drawing.SystemColors.ControlText;
			this.theDataGrid.Location = new System.Drawing.Point(16, 56);
			this.theDataGrid.Name = "theDataGrid";
			this.theDataGrid.Size = new System.Drawing.Size(360, 192);
			this.theDataGrid.TabIndex = 0;
			// 
			// label1
			// 
			this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((System.Byte)(0)));
			this.label1.Location = new System.Drawing.Point(16, 16);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(360, 23);
			this.label1.TabIndex = 1;
			this.label1.Text = "This DataGrid was brought to you from MS ADO";
			// 
			// mainForm
			// 
			this.AutoScaleBaseSize = new System.Drawing.Size(5, 13);
			this.ClientSize = new System.Drawing.Size(392, 266);
			this.Controls.AddRange(new System.Windows.Forms.Control[] {
																		  this.label1,
																		  this.theDataGrid});
			this.Name = "mainForm";
			this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
			this.Text = "Classic ADO C# Client";
			this.Load += new System.EventHandler(this.mainForm_Load);
			((System.ComponentModel.ISupportInitialize)(this.theDataGrid)).EndInit();
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

		private void mainForm_Load(object sender, System.EventArgs e)
		{
			// First make use of an ADO Connection type.
			ConnectionClass cn = new ConnectionClass();
			cn.Open("Provider=SQLOLEDB.1;data source=.;initial catalog=pubs;", "sa", "", -1);

			// Now make use of an ADO Recordset.
			RecordsetClass rs = new RecordsetClass();
			rs.Open("Authors", cn, CursorTypeEnum.adOpenKeyset, 
				LockTypeEnum.adLockOptimistic, -1);

			// Using the recordset, construct a DataTable
			// which will be bound to the DataGrid widget.
			DataTable theTable = new DataTable();

			// Fill in column names.
			for(int i = 0; i < rs.Fields.Count; i++)
				theTable.Columns.Add(new DataColumn(rs.Fields[i].Name, typeof(string)));

			// Fill in rows.
			while(!rs.EOF)
			{
				DataRow currRow;
				currRow = theTable.NewRow();
				for(int i = 0; i < rs.Fields.Count; i++)
					currRow[i] = rs.Fields[i].Value.ToString();
				theTable.Rows.Add(currRow);
				rs.MoveNext();
			}

			// Now bind to the DataGrid.
			theDataGrid.DataSource = theTable;

			// Close up ADO.
			rs.Close();
			cn.Close();
		}
	}
}
