// Problem 3.cpp : Defines the entry point for the console application.
#include "stdafx.h"

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

string isPalindromePermutation(string s) {
}

int main()
{
	ofstream fout("OUTPUT3.TXT");

    string s;
    getline(cin, s);

	string result = isPalindromePermutation(s);

	fout << result << endl;
	fout.close();

	return 0;
}


