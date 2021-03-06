// compound-interest-calc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <string>
#include<sstream>

int main()
{
	std::string input;  // buffer we will use to hold our input at every line 
	double p = 0; // principle
	double r = 0; // interest rate 
	double n = 0; // number of times compounded in a year 
	int t = 0; // number of years
	double result = 0; // total value of money at the end 

	std::cout << "Enter Principle: ";
	std::getline(std::cin, input);
	std::stringstream(input) >> p;

	std::cout << "Enter interest rate: ";
	std::getline(std::cin, input);
	std::stringstream(input) >> r;

	std::cout << "How many times a year is this compounded? ";
	std::getline(std::cin, input);
	std::stringstream(input) >> n;
	
	std::cout << "How many years will this be compounding interest?: ";
	std::getline(std::cin, input);
	std::stringstream(input) >> t;
	
	result = p * pow((1 + r / n), n*t);
	std::cout << "Your money will be worth: " << result << std::endl;

    return 0;
}
