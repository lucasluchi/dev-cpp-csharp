// Problem 4.cpp : Defines the entry point for the console application.
#include "stdafx.h"

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int getNumberOfCombinations(int n) {
}

int main()
{
	ofstream fout("OUTPUT4.TXT");

	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	int result = getNumberOfCombinations(n);

	fout << result << endl;

	fout.close();

	return 0;
}


