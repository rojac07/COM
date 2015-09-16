using System;
using System.Collections;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Web;
using System.Web.SessionState;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Web.UI.HtmlControls;
using ConfiguredCarObjects;
using System.EnterpriseServices;

namespace CarObjectsWebClient
{
	/// <summary>
	/// Summary description for WebForm1.
	/// </summary>
	public class CarWebForm : System.Web.UI.Page
	{
		protected System.Web.UI.WebControls.Label Label1;
		protected System.Web.UI.WebControls.TextBox txtBuyCarID;
		protected System.Web.UI.WebControls.DataGrid carDataGrid;
		protected System.Web.UI.WebControls.Label Label2;
		protected System.Web.UI.WebControls.Label Label3;
		protected System.Web.UI.WebControls.Label Label4;
		protected System.Web.UI.WebControls.TextBox txtMake;
		protected System.Web.UI.WebControls.TextBox txtColor;
		protected System.Web.UI.WebControls.TextBox txtID;
		protected System.Web.UI.WebControls.Button btnUpdate;
		protected System.Web.UI.WebControls.Button btnBuyCar;
	
		CarInventory ci = new CarInventory();



		#region Web Form Designer generated code
		override protected void OnInit(EventArgs e)
		{
			//
			// CODEGEN: This call is required by the ASP.NET Web Form Designer.
			//
			InitializeComponent();
			base.OnInit(e);
		}
		
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		private void InitializeComponent()
		{    
			this.btnBuyCar.Click += new System.EventHandler(this.btnBuyCar_Click);
			this.btnUpdate.Click += new System.EventHandler(this.btnUpdate_Click);
			this.Load += new System.EventHandler(this.Page_Load);

		}
		#endregion

		private void Page_Load(object sender, System.EventArgs e)
		{
			// Put user code to initialize the page here
			if(!IsPostBack)
				UpdateGrid();
		}

		private void btnUpdate_Click(object sender, System.EventArgs e)
		{
			ci.AddCar(txtMake.Text, txtColor.Text, Int32.Parse(txtID.Text));
			UpdateGrid();
		}

		private void btnBuyCar_Click(object sender, System.EventArgs e)
		{
			ci.BuyCar(Int32.Parse(txtBuyCarID.Text));
			UpdateGrid();
		}

		private void UpdateGrid()
		{
			carDataGrid.DataSource = ci.GetAllInventory();
			carDataGrid.DataBind();
		}
	}
}
