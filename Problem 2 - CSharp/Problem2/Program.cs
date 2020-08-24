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
        static string getLastLoop(string s)
        {
        }

        static void Main(string[] args)
        {
            TextWriter textWriter = new StreamWriter("OUTPUT2.TXT", true);

            string s = Console.ReadLine();

            textWriter.WriteLine(getLastLoop(s));

            textWriter.Flush();
            textWriter.Close();
        }

    }
}
