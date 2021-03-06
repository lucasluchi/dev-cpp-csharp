// Problem 1.cpp : Defines the entry point for the console application.
#include "stdafx.h"

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

// strings at index 0 is not used to make array indexing simple 
string _one[] = { "", "um ", "dois ", "três ", "quatro ",
				 "cinco ", "seis ", "sete ", "oito ",
				 "nove ", "dez ", "onze ", "doze ",
				 "treze ", "quatorze ", "quinze ",
				 "dezesseis ", "dezessete ", "dezoito ",
				 "dezenove " };

// strings at index 0 and 1 is not used to make array indexing simple 
string _ten[] = { "", "", "vinte ", "trinta ", "quarenta ",
				 "cinquenta ", "sessenta ", "setenta ", "oitenta ",
				 "noventa ", "cem " };

// strings at index 0 is not used to make array indexing simple 
string _hundred[] = { "", "cento ", "duzentos ", "trezentos ", "quatrocentos ",
				 "quinhentos ", "seiscentos ", "setecentos ", "oitocentos ",
				 "novecentos " };

// Convert numeric amount into words
// Convert numbers with only 3 digits
string numToWords(long n, string s)
{
	string str = "";

	int num = n;

	int one = num % 10;
	num /= 10;

	int ten = num % 10;
	num /= 10;

	int hundred = num % 10;

	if (one == 0 && ten == 0 && hundred == 0)
		return str;

	// String with words
	str = _hundred[hundred] + ((hundred > 0) ? "e " : "")
		+ _ten[ten] + (((ten > 1) && (one > 0)) ? "e " : "")
		+ _one[((ten == 1) ? one + 10 : one)] + s;

	return str;
}

// Function to print a given cash(R$) number in words 
string convertToWords(long n, bool reais)
{
	string str = "";

	str += numToWords(n / 1000000000, (n / 1000000000) > 1 ? "bilhões " : "bilhão ");

	str += numToWords(n / 1000000, (n / 1000000) > 1 ? "milhões " : "milhão ");

	str += numToWords(n / 1000, "mil ");

	if (n > 1000 && n % 100)
		str += "e ";

	str += numToWords(n, "");

	// Check plural form
	if (n > 1)
		str += (reais == true) ? "reais " : "centavos";
	else
		str += (reais == true) ? "real " : "centavo";

	return str;
}


string convertAmount2Words(int m, int n) {
	
	string str = "";

	str += convertToWords(m, true);

	if (n)
	{
		str += "e ";
		str += convertToWords(n, false);
	}

	return str;
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


