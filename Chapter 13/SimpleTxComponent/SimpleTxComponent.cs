using System;
using System.Runtime.InteropServices;
using System.EnterpriseServices;
using System.Windows.Forms;

namespace SimpleTxComponent
{
	[ClassInterface(ClassInterfaceType.AutoDual)]
	[Transaction(TransactionOption.Required)]
	[EventTrackingEnabled(true)]
	public class MyTxClass : ServicedComponent
	{
		public MyTxClass(){}

		public void ShowMyTxID()
		{
			MessageBox.Show(ContextUtil.TransactionId.ToString(), 
							"Tx ID is:");
		}

		public void TryThisTransaction()
		{
			try
			{
				// Do the work here...
				ContextUtil.SetComplete();
			}
			catch
			{
				ContextUtil.SetAbort();
			}
		}

		public void TryThisOtherTransaction()
		{
			try
			{
				// Do the work here...

				// Happy!
				ContextUtil.MyTransactionVote = TransactionVote.Commit; 
			}
			catch
			{
				// Unhappy.
				ContextUtil.MyTransactionVote = TransactionVote.Abort;
			}
			finally
			{
				// Done.
				ContextUtil.DeactivateOnReturn = true;
			}
		}

		[AutoComplete]
		public void YetAnotherTxMethod()
		{
			// Do the work here...
			// Any exceptions thrown in the method
			// will set the happy bit to false.
		}
	}
}
