/*
Lab #9 - Rational class .cpp file
Purpose: This source file defines the Rational class with its members
Author: Esteban Ramirez
Date: Nov 1st 2022
*/

#include "Rational.h"

// Constructor  
Rational::Rational()
{
	// Default values
	numerator = 0;
	denominator = 1;
}

// Set functions
void Rational::setNumerator(int num)
{
	numerator = num;
}

void Rational::setDenominator(int den)
{
	denominator = den;
}


// Get functions
int Rational::getNumerator()
{
	reduce();
	return numerator;
}

int Rational::getDenominator()
{
	reduce();
	return denominator;
}

// Function that finds the GCD of the fraction
int Rational::commonDivisorFinder(int num, int den)
{
	if (den == 0)
	{
		return num;
	}

	return commonDivisorFinder(den, num % den);
}

// Function that simplifies the fraction with the GCD
void Rational::reduce()
{
	int commonDivisor = commonDivisorFinder(numerator, denominator);

	// Define the simplest form of the fraction
	numerator /= commonDivisor;
	denominator /= commonDivisor;

	// If denominator is negative, pass the decimal to the front of the fraction. If both numerator and denominator are negative, make the fraction positive
	if (denominator < 0 || (denominator < 0 && numerator < 0))
	{
		denominator *= -1;
		numerator *= -1;
	}

}

// Function that displays the fraction
void Rational::displayFraction()
{
	reduce();

	// Output message and fraction
	cout << numerator << "/" << denominator;
}

// Function that displays the fraction as a decimal
void Rational::displayDouble()
{
	reduce();
	cout << (double)numerator / denominator;
}

// Overload of + operator
Rational operator+(const Rational& r1, const Rational& r2)
{
	Rational temp;
	if (r1.denominator == r2.denominator)
	{
		temp.numerator = r1.numerator + r2.numerator;
		temp.denominator = r1.denominator;
	}
	else
	{
		temp.numerator = ((r1.numerator) * (r2.denominator)) + ((r2.numerator) * (r1.denominator));
		temp.denominator = (r1.denominator) * (r2.denominator);
	}

	return temp;
}

// Overload of - operator
Rational operator-(const Rational& r1, const Rational& r2)
{
	Rational temp;
	if (r1.denominator == r2.denominator)
	{
		temp.numerator = r1.numerator - r2.numerator;
		temp.denominator = r1.denominator;
	}
	else
	{
		temp.numerator = ((r1.numerator) * (r2.denominator)) - ((r2.numerator) * (r1.denominator));
		temp.denominator = (r1.denominator) * (r2.denominator);
	}

	return temp;
}

// Overload of * operator
Rational operator*(const Rational& r1, const Rational& r2)
{
	Rational temp;

	temp.numerator = r1.numerator * r2.numerator;
	temp.denominator = r1.denominator * r2.denominator;

	return temp;
}

// Overload of / operator
Rational operator/(const Rational& r1, const Rational& r2)
{
	Rational temp;

	temp.numerator = r1.numerator * r2.denominator;
	temp.denominator = r1.denominator * r2.numerator;

	return temp;
}

// Overload of < operator
bool Rational::operator<(const Rational& r)
{
	return numerator * r.denominator < denominator* r.numerator;
}

// Overload of <= operator
bool Rational::operator<=(const Rational& r)
{
	return numerator * r.denominator <= denominator * r.numerator;
}

// Overload of > operator
bool Rational::operator>(const Rational& r)
{
	return numerator * r.denominator > denominator * r.numerator;
}

// Overload of >= operator
bool Rational::operator>=(const Rational& r)
{
	return numerator * r.denominator >= denominator * r.numerator;
}

// Overload of == operator
bool Rational::operator==(const Rational& r)
{
	return numerator * r.denominator == denominator * r.numerator;
}

// Overload of != operator
bool Rational::operator!=(const Rational& r)
{
	return numerator * r.denominator != denominator * r.numerator;
}

// Overload of >> operator
istream& operator>>(istream& in, Rational& obj)
{
	in >> obj.numerator;
	if (in.peek() == '/')
	{
		in.ignore();
		if (isdigit(in.peek()))
			in >> obj.denominator;
		else
			obj.denominator = 1;
	}
	else
		obj.denominator = 1;
	return in;

}

// Overload of << operator
istream& operator<<(istream& in, Rational& obj)
{
	in >> obj.numerator;
	if (in.peek() == '/')
	{
		in.ignore();
		if (isdigit(in.peek()))
			in >> obj.denominator;
		else
			obj.denominator = 1;
	}
	else
		obj.denominator = 1;
	return in;
}

