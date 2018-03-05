// compound-interest-calc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include <string>
#include<sstream>

int main()
{
	string input; 
	double p = 0, r = 0, n = 0; // principle, interest rate, number of times compounded by years 
	int t = 0; // number of years
	double result = 0;

	cout << "Enter Principle: ";
	getline(cin, input);
	stringstream(input) >> p;

	cout << "Enter interest rate: ";
	getline(cin, input);
	stringstream(input) >> r;

	cout << "How many times a year is this compounded? ";
	getline(cin, input);
	stringstream(input) >> p;
	
	cout << "How many years will this be compounding interest?: ";
	getline(cin, input);
	stringstream(input) >> p;
	
	result = p * pow((1 + (r / n)), n*t);
	cout << "Your money will be worth: " << result << endl;

    return 0;
}
