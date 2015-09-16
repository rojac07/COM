using System;
using System.EnterpriseServices;
using System.Runtime.InteropServices;

// ADO.NET data access.
using System.Data;
using System.Data.SqlClient;

namespace ConfiguredCarObjects
{
	[ClassInterface(ClassInterfaceType.AutoDual)]
	[Transaction(TransactionOption.Required)]
	[EventTrackingEnabledAttribute(true)]
	[ConstructionEnabled(Default = "Integrated Security=SSPI;Initial Catalog=CarLot;Data Source=localhost;")]
	public class CarInventory : ServicedComponent 
	{
		// Instance data.
		private string connString;
		private SqlConnection sqlConn;

		public CarInventory(){}

		#region COM+ Centric Methods
		protected override void Construct(string ctorStr)
		{connString = ctorStr;}

		protected override void Activate()
		{
			// Make connection to database.
			try
			{
				sqlConn = new SqlConnection(connString);	
			}
			catch(SqlException ex)
			{ throw ex;}
		}
		protected override void Deactivate()
		{
			// Close connection to database.
			sqlConn.Close();
		}

		protected override bool CanBePooled()
		{return false;}
		#endregion

		[AutoComplete]
		public DataSet GetAllInventory()
		{
			// Could also call MyTransactionVote /  DeactivateOnReturn
			// or use SetComplete() / SetAbort().

			// Fill a DataSet using a DataAdapter.
			SqlDataAdapter dAdapt;
			DataSet myDS = new DataSet("CarInventory");
			dAdapt = new SqlDataAdapter("SELECT * FROM Inventory", sqlConn);

			// Fill and bind.
			dAdapt.Fill(myDS, "Inventory");

			return myDS;
		}

		public void BuyCar(int carID)
		{
			// Build a SQL statement based on incoming params.
			string myInsertQuery = 
				string.Format("DELETE FROM Inventory WHERE CarID = '{0}'", carID);
			try
			{
				// Log car to be purchased.
				LogSale log = new LogSale();
				log.Log(carID);
				log.Dispose();

				// Configure SqlCommand type.
				SqlCommand sqlCmd = new SqlCommand(myInsertQuery);
				sqlCmd.Connection = sqlConn;
				sqlConn.Open();

				// Delete the record.
				sqlCmd.ExecuteNonQuery();
			
				// Update our context.
				// Could also call MyTransactionVote /  DeactivateOnReturn
				// or use AutoCompleteAttribute.
				ContextUtil.SetComplete();
			}
			catch{ContextUtil.SetAbort();}
		}

		public void AddCar(string make, string color, int ID)
		{
			// Always done.
			ContextUtil.DeactivateOnReturn = true;

			// Build a SQL statement based on incoming params.
			string myInsertQuery = 
				string.Format(@"INSERT INTO Inventory (CarMake, CarColor, CarID) 
							  Values('{0}', '{1}', '{2}'", 
							  make, color, ID);
			try
			{
				// Configure SqlCommand type.
				SqlCommand sqlCmd = new SqlCommand(myInsertQuery);
				sqlCmd.Connection = sqlConn;
				sqlConn.Open();

				// Insert the record.
				sqlCmd.ExecuteNonQuery();
			
				// Update our context.
				// Could also call SetComplete() or use AutoCompleteAttribute.
				ContextUtil.MyTransactionVote = TransactionVote.Commit;
			}
			catch {ContextUtil.MyTransactionVote = TransactionVote.Abort;}
		}
	}
}
