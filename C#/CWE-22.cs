using System;
using System.IO;

class Program
{
    static void Main(string[] args)
    {
        if (args.Length != 1)
        {
            Console.WriteLine("Usage: Program.exe <filename>");
            return;
        }

        string filename = args[0];
        string basePath = "/var/data/"; // Assume restricted directory

        // Construct full file path
        string filePath = basePath + filename;

        try
        {
            // Attempt to read the file
            string content = File.ReadAllText(filePath);
            Console.WriteLine(content);
        }
        catch (FileNotFoundException)
        {
            Console.WriteLine("File not found or cannot be opened.");
        }
        catch (Exception ex)
        {
            Console.WriteLine("Error accessing file: " + ex.Message);
        }
    }
}
