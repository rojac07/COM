using System;
using System.Runtime.InteropServices;

namespace DotNetEventServer
{
	// This is the name of the event interface to be
	// generated.
	[InterfaceType(ComInterfaceType.InterfaceIsIDispatch)]
	[Guid("3289316F-0B19-44f1-B33B-8673D6FAF057")]
	public interface _DEventInterface
	{
		[DispId(1)]void TheEvent(string msg);
	}

	// The DotNetEventSender .NET class defines
	// _DEventInterface as the [default, source].
	[ComSourceInterfaces(typeof(_DEventInterface))]
	[ClassInterface(ClassInterfaceType.AutoDual)]
	[Guid("24F279CB-D9BA-4ca4-95CD-2F2338443088")]
	public class DotNetEventSender 
	{
		public DotNetEventSender(){}

		// No need to show this delegate to COM
		[ComVisible(false)]
		public delegate void MyEventTarget(string msg);

		public event MyEventTarget TheEvent;

		public void FireTheEvent()
		{
			TheEvent("Hello from the DotNetEventSender");
		}
	}

	[InterfaceType(ComInterfaceType.InterfaceIsIDispatch)]
	[Guid("FEBB2E08-7F6D-415d-AD90-B8C4C03A7B4B")]
	public interface _DEventInterfaceOne
	{
		void EventA ();
	}

	[InterfaceType(ComInterfaceType.InterfaceIsIDispatch)]
	[Guid("5941D9A2-1149-4daf-88EA-EB5B04B9B85B")]
	public interface _DEventInterfaceTwo
	{
		void EventB ();
	}

	[InterfaceType(ComInterfaceType.InterfaceIsIDispatch)]
	[Guid("333E8C06-04AC-4677-8AE2-3AAEF2E046DC")]
	public interface _DEventInterfaceThree
	{
		void EventC ();
	}

	[ComSourceInterfaces(typeof(_DEventInterfaceOne), 
		 typeof(_DEventInterfaceTwo), 
		 typeof(_DEventInterfaceThree))]
	[ClassInterface(ClassInterfaceType.AutoDual)]
	[Guid("58E48229-9FFF-42fb-B987-8096B27B6B19")]
	public class DotNetMultiEventSourceClass
	{
		public DotNetMultiEventSourceClass(){}

		[ComVisible(false)]
		public delegate void MyEventTarget();

		public event MyEventTarget EventA;
		public event MyEventTarget EventB;
		public event MyEventTarget EventC;

		// Fire event...
	}
}
