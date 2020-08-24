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
        public static int getNumberOfCombinations(int n)
        {

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
