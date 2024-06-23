using System;

public class IntegerOverflowExample
{
    public static void Main()
    {
        int maxValue = int.MaxValue;
        Console.WriteLine("Max value of int: " + maxValue);

        // This will cause an overflow
        int overflowValue = maxValue + 1;
        Console.WriteLine("Overflow value: " + overflowValue);
    }
}
