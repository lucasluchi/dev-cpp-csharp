// Problem 1.cpp : Defines the entry point for the console application.
#include "stdafx.h"

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

string convertAmount2Words(int m, int n) {
	return "xxx";
}

int main()
{
	ofstream fout("OUTPUT1.TXT");

	int m;
	cin >> m;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	string result = convertAmount2Words(m, n);

	fout << result << endl;

	fout.close();

	return 0;
}


