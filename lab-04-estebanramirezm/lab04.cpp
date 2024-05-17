/*
Lab #4
Purpose: This program asks asks the user for a fraction and returns it along its simplified form
Author: Esteban Ramirez 
Date: Sept 22nd 2022
*/

#include <iostream>
#include "Rational.h"
using namespace std;


// Function that asks the user for a fraction and returns it along its simplified form
int main ()
{
    // Variables declaration
    int numerator, denominator;
    
    // Greeting
    cout << "FRACTION SIMPLIFIER V2.0\n\n";
    
    // Rational object creation
    Rational fraction;
    
    // User input
    cout << "Input the numerator: ";
    cin >> numerator;
    cout << "Input the denominator: ";
    cin >> denominator;
    
    // Setter functions
    fraction.setNumerator(numerator);
    fraction.setDenominator(denominator);
    
    // Simplify the fraction
    fraction.simplifyFraction();
    
    // Display the fraction
    fraction.displayFraction();
    
    // Goodbye
    cout << "Thanks for using this program! :)";
    return 0;
}

