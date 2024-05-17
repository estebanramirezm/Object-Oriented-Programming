/*
Lab #9 - Rational class .h file
Purpose: This header file declares the Rational class with its members
Author: Esteban Ramirez
Date: Nov 1st 2022
*/

#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>
using namespace std;

class Rational
{
private:
	// Variable members
	int numerator;
	int denominator;

	// Function that handles non-reduced fractions
	void reduce();

public:
	// Constructor 
	Rational();

	// Set functions
	void setNumerator(int);
	void setDenominator(int);

	// Get functions
	int getNumerator();
	int getDenominator();

	// Member functions
	void displayFraction();
	int commonDivisorFinder(int, int);
	void displayDouble();
	friend Rational operator +(const Rational&, const Rational&);
	friend Rational operator -(const Rational&, const Rational&);
	friend Rational operator *(const Rational&, const Rational&);
	friend Rational operator /(const Rational&, const Rational&);
	bool operator>(const Rational&);
	bool operator>=(const Rational&);
	bool operator<(const Rational&);
	bool operator<=(const Rational&);
	bool operator==(const Rational&);
	bool operator!=(const Rational&);
	friend istream& operator >> (istream& in, Rational& obj);
	friend istream& operator << (istream& in, Rational& obj);
};
#endif 
