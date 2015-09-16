using System;
using System.Runtime.InteropServices;
using System.Windows.Forms;

namespace ManagedComDefs
{
	#region DVD Types
	// Managed definitions of IStartable 
	// and IStoppable 
	[ComImport,
	Guid("7FE41805-124B-44AE-BEAE-C3491E35372B"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]
	interface IStartable
	{ void Start(); };

	[ComImport,
	Guid("B001A308-8D66-4d23-84A4-B67615646ABB"),
	InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]
	interface IStoppable 
	{ void Break();};

	[ClassInterface(ClassInterfaceType.AutoDual)]
	public class DvdPlayer : IStartable, IStoppable
	{
		public DvdPlayer()
		{}
		public void Start()
		{
			MessageBox.Show("Staring movie...", "DvdPlayer");
		}
		public void Break()
		{
			MessageBox.Show("Stopping movie...", "DvdPlayer");
		}
	}
	#endregion

	#region Shape Types
	public enum SHAPECOLOR
	{
		RED, PINK, RUST
	};

	[ComImport,
	Guid("B1691C03-7EA8-4DAB-86CC-7D6CD859671A"),
	InterfaceType(ComInterfaceType.InterfaceIsDual)]
	interface IDrawable
	{ 
		[DispId(1)] 
		void Draw([In] int top, [In] int left, 
			[In] int bottom, [In] int right);
		[DispId(2)] 
		void SetColor([In] SHAPECOLOR c);
	};
	
	[ClassInterface(ClassInterfaceType.AutoDual)]
	public class Circle: IDrawable
	{
		public Circle()
		{}

		public void Draw(int top, int left, int bottom, int right)
		{
			MessageBox.Show(String.Format("Top:{0} Left:{1} Bottom:{2} Right{3}",
				top, left, bottom, right));
		}

		public void SetColor(SHAPECOLOR c)
		{
			MessageBox.Show(String.Format("Shape color is {0}", c.ToString()));
		}
	}
	#endregion
}
