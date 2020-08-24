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

namespace Problem3
{
    class Program
    {
        static string convertAmount2Words(int m, int n)
        {
        }

        static void Main(string[] args)
        {
            TextWriter textWriter = new StreamWriter("OUTPUT1.TXT", true);

            int m = Convert.ToInt32(Console.ReadLine().Trim());
			int n = Convert.ToInt32(Console.ReadLine().Trim());
			
            textWriter.WriteLine(convertAmount2Words(m, n));

            textWriter.Flush();
            textWriter.Close();
        }

    }
}
