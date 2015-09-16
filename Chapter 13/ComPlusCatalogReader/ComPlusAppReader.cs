using System;
using COMAdmin;

namespace ComPlusCatalogReader
{
	class ComPlusAppReader
	{
		[STAThread]
		static void Main(string[] args)
		{
			// Read the COM+ apps on this machine.
			COMAdminCatalogClass comcat = new COMAdminCatalogClass();
			ICatalogCollection apps = 
				(ICatalogCollection)comcat.GetCollection("Applications");
			apps.Populate();

			foreach(ICatalogObject app in apps)
			{
				Console.WriteLine("COM+ App: {0}", app.Name.ToString());
			}
		}
	}
}
