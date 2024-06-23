using System;

namespace CWE20_Example
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Введите число: ");
            string input = Console.ReadLine();
            
            // Пример уязвимости: отсутствует проверка входных данных
            int number = int.Parse(input);
            
            // Использование введенного числа
            Console.WriteLine("Вы ввели число: " + number);
        }
    }
}
