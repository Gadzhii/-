<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="XSSVulnerableApp.Default" %>

<!DOCTYPE html>
<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title>Vulnerable to XSS</title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            <h1>Vulnerable to XSS</h1>
            <label for="userInput">Enter something:</label>
            <asp:TextBox ID="userInput" runat="server"></asp:TextBox>
            <asp:Button ID="submitButton" runat="server" Text="Submit" OnClick="SubmitButton_Click" />
            <br />
            <div id="output" runat="server"></div>
        </div>
    </form>
</body>
</html>
