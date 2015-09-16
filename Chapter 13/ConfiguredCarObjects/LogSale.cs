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
	[PrivateComponent()]
	public class LogSale : ServicedComponent
	{
		public LogSale(){}	

		public void Log(int ID)
		{
			try
			{
				SqlConnection sqlConn = 
					new SqlConnection("Integrated Security=SSPI;Initial Catalog=CarLot;Data Source=localhost;");
				sqlConn.Open();

				// Build a SQL statement based on incoming params.
				string myInsertQuery = 
					string.Format(@"INSERT INTO CarsSold (CarID, DateSold) 
                                  Values('{0}', {1}'", ID, DateTime.Today);
				// Configure SqlCommand type.
				SqlCommand sqlCmd = new SqlCommand(myInsertQuery);
				sqlCmd.Connection = sqlConn;

				// Insert the record.
				sqlCmd.ExecuteNonQuery();			
				sqlConn.Close(); 
				ContextUtil.SetComplete();
			}
			catch
			{
				ContextUtil.SetAbort();
			}
		}
	}	
}
