#include <iostream>
#include "Rational.h"
using namespace std;

// Constructor  
Rational::Rational()
{
    // Object creation message 
    cout << "Creating a rational-number class object... \n\n";
    
    // Default values
    numerator = 0;
    denominator = 0;
    simpleNumerator = 0;
    simpleDenominator = 0;
 }
	
// Set functions
void Rational::setNumerator(int num)
{
    numerator = num;
    simpleNumerator = num;
}
	
void Rational::setDenominator(int den) 
{
    denominator = den;
    simpleDenominator = den;
}


// Get functions
int Rational::getNumerator()
{
    return numerator;
}

int Rational::getDenominator()
{
    return denominator;
}

// Member functions
// Function that finds the GCD of the fraction
int Rational::commonDivisorFinder(int num, int den)
{
    if (den == 0)
        return num;
    
    return commonDivisorFinder(den, num % den);
}

// Function that simplifies the fraction with the GCD
void Rational::simplifyFraction()
{
    int commonDivisor = commonDivisorFinder(numerator, denominator);
    
    // Define the simplest form of the fraction
    simpleNumerator /= commonDivisor;
    simpleDenominator /= commonDivisor;
}

// Function that displays the fraction
void Rational::displayFraction()
{
    // Output message and fraction
    cout << endl << "The fraction you entered is: " << numerator << "/" << denominator << endl;
    cout << "The simplest form of the fraction is: " << simpleNumerator << "/" << simpleDenominator << endl << endl;

}

