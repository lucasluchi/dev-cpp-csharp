// Problem 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string getLastLoop(string s) {
}

int main()
{
    ofstream fout("OUTPUT2.TXT");

    string s;
    getline(cin, s);

    string result = getLastLoop(s);

    fout << result << endl;
    fout.close();

    return 0;
}
