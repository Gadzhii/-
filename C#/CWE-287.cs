using System;
using System.Collections.Generic;

public class Authentication
{
    private Dictionary<string, string> users = new Dictionary<string, string>
    {
        { "admin", "password123" },
        { "user", "userpass" }
    };

    public bool Login(string username, string password)
    {
        // Неправильная аутентификация: проверяется только наличие имени пользователя
        if (users.ContainsKey(username))
        {
            Console.WriteLine("Authentication successful!");
            return true;
        }

        Console.WriteLine("Authentication failed!");
        return false;
    }
}

public class Program
{
    public static void Main()
    {
        Authentication auth = new Authentication();

        Console.WriteLine("Enter username:");
        string username = Console.ReadLine();

        Console.WriteLine("Enter password:");
        string password = Console.ReadLine();

        auth.Login(username, password);
    }
}
