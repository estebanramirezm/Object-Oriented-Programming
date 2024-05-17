/*
Lab #2
Purpose: This program asks the user for a fraction and returns it along its simplified form
Author: Esteban Ramirez 
Date: Sept 10th 2022
*/

#include <iostream>
using namespace std;

// Structure declaration
struct Fraction 
{
int numerator;
int denominator;
};

// Functions declaration 
Fraction fractionInput();
Fraction fractionSimplifier (const Fraction &userFraction);
void fractionDisplay (const Fraction &userFraction, const Fraction &simpleFraction);

// Function that asks the user for a fraction and returns it along its simplified form
int main()
{
    // Variable declaration
    Fraction userFraction;
    
    // Welcome message
    cout << "FRACTION SIMPLIFIER v1.0" << endl << endl;
    
    // User input 
    cout << "Enter a fraction:" << endl;
    userFraction = fractionInput();
    
    // Fraction output
    fractionDisplay (userFraction, fractionSimplifier(userFraction));
    
    // Goodbye message
    cout << endl << "Thanks for using this program! :)";
    return 0;
}

// Function that asks the user to input a fraction 
Fraction fractionInput()
{
    // Variable declaration
    Fraction userFraction;
    
    // Ask for user input
    cout << "Numerator = ";
    cin >> userFraction.numerator;
    cout << "Denominator = ";
    cin >> userFraction.denominator;

    return userFraction;
}

// Function that simplifies the user-defined fraction  
Fraction fractionSimplifier (const Fraction &userFraction)
{
    // Variables declaration
    Fraction simpleFraction = userFraction;
    int rem, commonDivisor = userFraction.denominator;
    
    // Loop that checks for the greatest common divisor
    do
    {
        rem = userFraction.numerator % commonDivisor ;
        commonDivisor = rem;
    } while (rem == 0);
  
    // Define the simplest form of the fraction
    simpleFraction.numerator = userFraction.numerator / commonDivisor;
    simpleFraction.denominator = userFraction.denominator / commonDivisor;

    return simpleFraction;
}

// Function that displays both forms of the fraction  
void fractionDisplay (const Fraction &userFraction, const Fraction &simpleFraction)
{
    // Output message + fraction
    cout << endl << "The fraction you entered is: " << userFraction.numerator << "/" << userFraction.denominator << endl;
    cout << "The simplest form of the fraction is: " << simpleFraction.numerator << "/" << simpleFraction.denominator << endl;
}

 