using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;


namespace Problem4
{
    class Solution
    {
        public static int combinations(int[] arr, int len, int n)
        {
            // there is 1 solution  
            if (n == 0)
                return 1;

            // there is no solution
            if ((len <= 0 && n >= 1) || (n < 0))
                return 0;

            return combinations(arr, len - 1, n) + combinations(arr, len, n - arr[len - 1]);
        }

        public static int getNumberOfCombinations(int n)
        {
            int[] coins = { 1, 5, 10, 20, 25, 50 };

            return combinations(coins, coins.Length, n);
        }
        public static void Main(string[] args)
        {
            TextWriter textWriter = new StreamWriter("OUTPUT4.TXT", true);

            int n = Convert.ToInt32(Console.ReadLine().Trim());

            int result = getNumberOfCombinations(n);
            textWriter.WriteLine(result);

            textWriter.Flush();
            textWriter.Close();
        }
    }

}
