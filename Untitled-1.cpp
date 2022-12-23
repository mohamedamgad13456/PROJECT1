using System;

namespace PrimeNumbers
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter the lower bound: ");
            int n1 = int.Parse(Console.ReadLine());
            Console.Write("Enter the upper bound: ");
            int n2 = int.Parse(Console.ReadLine());

            for (int i = n1; i <= n2; i++)
            {
                bool isPrime = true;
                for (int j = 2; j < i; j++)
                {
                    if (i % j == 0)
                    {
                        isPrime = false;
                        break;
                    }
                }
                if (isPrime) Console.WriteLine("  "+i);
                
            }
            Console.WriteLine();
        }
    }
}