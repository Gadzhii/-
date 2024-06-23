using System;
using System.Diagnostics;

class Program
{
    static void Main()
    {
        Console.Write("Введите директорию: ");
        string directory = Console.ReadLine();

        // Уязвимая строка
        string command = "cmd.exe /C dir " + directory;
        ProcessStartInfo procStartInfo = new ProcessStartInfo("cmd", "/C " + command);

        procStartInfo.RedirectStandardOutput = true;
        procStartInfo.UseShellExecute = false;
        procStartInfo.CreateNoWindow = true;

        Process proc = new Process();
        proc.StartInfo = procStartInfo;
        proc.Start();

        string result = proc.StandardOutput.ReadToEnd();
        Console.WriteLine(result);
    }
}
