using System;
using System.Web.UI;

namespace XSSVulnerableApp
{
    public partial class Default : Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
        }

        protected void SubmitButton_Click(object sender, EventArgs e)
        {
            string userInput = userInput.Text;
            output.InnerHtml = "User Input: " + userInput; // This line is vulnerable to XSS
        }
    }
}
