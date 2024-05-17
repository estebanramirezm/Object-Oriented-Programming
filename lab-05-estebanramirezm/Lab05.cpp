/*
Project:    CS 1415 Lab #5
File:       CS1415Lab05.cpp
Purpose:    Driver program for the Complex class
Author:     Garth Sorenson
Date:       3 Feb 2020
*/

// INCLUDE
#include <iostream>
#include "Complex.h"
using namespace std;

// FUNCTIONS
/*
Purpose:    Controls program demonstrating the Complex class
Input:      One complex number, real and imaginary parts.
Output:     Sum and difference of the two complex numbers, one set by the program, the other input by the user.
*/
int main()
{
	Complex complex1(12.3, -6.5), complex2;
	Complex sum, diff;
	double real, imag;

	// Display greeting
	cout << "This program demonstrates the Complex class." << endl
		 << "It reports the sum and difference of two complex numbers," << endl
		 << "one set by the program, the other input by the user." << endl
		 << endl;

	// Input a complex number
	cout << "Enter the real part for a complex number: ";
	cin >> real;
	cout << "Enter the imaginary part for a complex number: ";
	cin >> imag;

	complex2.setReal(real);
	complex2.setImaginary(imag);

	// Generate the sum and differenc of the two complex numbers
	sum = complex1.add(complex2);
	diff = complex1.subtract(complex2);

	// Display sum in a complete expression
	cout << endl;
	cout << "Sum:" << endl;
	complex1.print();
	cout << " + ";
	complex2.print();
	cout << " = ";
	sum.print();

	// Display difference in a complete expression
	cout << endl;
	cout << "Difference:" << endl;
	complex1.print();
	cout << " - ";
	complex2.print();
	cout << " = ";
	diff.print();

	return 0;
}