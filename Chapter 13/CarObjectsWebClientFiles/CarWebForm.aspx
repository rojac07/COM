<%@ Page language="c#" Codebehind="CarWebForm.aspx.cs" AutoEventWireup="false" Inherits="CarObjectsWebClient.CarWebForm" %>
<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0 Transitional//EN" >
<HTML>
	<HEAD>
		<title>WebForm1</title>
		<meta name="GENERATOR" Content="Microsoft Visual Studio 7.0">
		<meta name="CODE_LANGUAGE" Content="C#">
		<meta name="vs_defaultClientScript" content="JavaScript">
		<meta name="vs_targetSchema" content="http://schemas.microsoft.com/intellisense/ie5">
	</HEAD>
	<body MS_POSITIONING="GridLayout">
		<form id="Form1" method="post" runat="server">
			<asp:DataGrid id="carDataGrid" style="Z-INDEX: 101; LEFT: 31px; POSITION: absolute; TOP: 69px" runat="server" BorderColor="#CC9966" BorderStyle="None" BorderWidth="1px" BackColor="White" CellPadding="4">
				<SelectedItemStyle Font-Bold="True" ForeColor="#663399" BackColor="#FFCC66"></SelectedItemStyle>
				<ItemStyle ForeColor="#330099" BackColor="White"></ItemStyle>
				<HeaderStyle Font-Bold="True" ForeColor="#FFFFCC" BackColor="#990000"></HeaderStyle>
				<FooterStyle ForeColor="#330099" BackColor="#FFFFCC"></FooterStyle>
				<PagerStyle HorizontalAlign="Center" ForeColor="#330099" BackColor="#FFFFCC"></PagerStyle>
			</asp:DataGrid>
			<asp:Button id="btnUpdate" style="Z-INDEX: 111; LEFT: 329px; POSITION: absolute; TOP: 219px" runat="server" Width="129px" Text="Update Inventory"></asp:Button>
			<asp:Label id="Label4" style="Z-INDEX: 110; LEFT: 322px; POSITION: absolute; TOP: 171px" runat="server">ID</asp:Label>
			<asp:Label id="Label3" style="Z-INDEX: 109; LEFT: 322px; POSITION: absolute; TOP: 117px" runat="server">Color</asp:Label>
			<asp:Label id="Label2" style="Z-INDEX: 108; LEFT: 322px; POSITION: absolute; TOP: 71px" runat="server">Make</asp:Label>
			<asp:TextBox id="txtID" style="Z-INDEX: 107; LEFT: 379px; POSITION: absolute; TOP: 167px" runat="server"></asp:TextBox>
			<asp:TextBox id="txtColor" style="Z-INDEX: 106; LEFT: 379px; POSITION: absolute; TOP: 120px" runat="server"></asp:TextBox>
			<asp:TextBox id="txtMake" style="Z-INDEX: 105; LEFT: 379px; POSITION: absolute; TOP: 71px" runat="server"></asp:TextBox>
			<asp:Button id="btnBuyCar" style="Z-INDEX: 104; LEFT: 37px; POSITION: absolute; TOP: 268px" runat="server" Width="96px" Text="Buy Car ID#"></asp:Button>
			<asp:TextBox id="txtBuyCarID" style="Z-INDEX: 103; LEFT: 150px; POSITION: absolute; TOP: 266px" runat="server" Width="81px"></asp:TextBox>
			<asp:Label id="Label1" style="Z-INDEX: 102; LEFT: 29px; POSITION: absolute; TOP: 26px" runat="server" Font-Size="Large">Current Inventory</asp:Label>
		</form>
	</body>
</HTML>
