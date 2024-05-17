/*
Lab #9
Purpose: This program updates the previous Rational class from Lab 4 using overloaded operators
Author: Esteban Ramirez
Date: Nov 1st 2022
*/

#include <iostream>
#include "Rational.h"
using namespace std;

// Function that asks the user for a fraction and returns it along its simplified form
int main()
{
    // Variables declaration
    int numeratorOne, denominatorOne, numeratorTwo, denominatorTwo;
    Rational fractionOne, fractionTwo, fractionThree;
    bool flag;

    // Greeting
    cout << "FRACTION SIMPLIFIER V3.0\n\n";

    // User input for fraction one
    cout << "Input the numerator for fraction #1: ";
    cin >> numeratorOne;
    cout << "Input the denominator for fraction #1: ";
    cin >> denominatorOne;

    // Input validation for the denominator
    if (denominatorOne == 0)
    {
        cout << endl;
        do
        {
            cout << "The denominator can't be 0. Try again: ";
            cin >> denominatorOne;
        } while (denominatorOne == 0);
    };

    // User input for fraction two
    cout << "\nInput the numerator for fraction #2: ";
    cin >> numeratorTwo;
    cout << "Input the denominator for fraction #2: ";
    cin >> denominatorTwo;

    // Input validation for the denominator
    if (denominatorTwo == 0)
    {
        cout << endl;
        do
        {
            cout << "The denominator can't be 0. Try again: ";
            cin >> denominatorTwo;
        } while (denominatorTwo == 0);
        cout << endl;
    };

    // Setter functions
    fractionOne.setNumerator(numeratorOne);
    fractionOne.setDenominator(denominatorOne);
    fractionTwo.setNumerator(numeratorTwo);
    fractionTwo.setDenominator(denominatorTwo);

    // Display the fractions
    cout << "\nThe first fraction you entered is: " << numeratorOne << "/" << denominatorOne << endl;
    cout << "The simplified form of this fraction is: ";
    fractionOne.displayFraction();
    cout << "\n\nThe second fraction you entered is: " << numeratorTwo << "/" << denominatorTwo << endl;
    cout << "The simplified form of this fraction is: ";
    fractionTwo.displayFraction();


    // Display sum
    fractionThree = fractionOne + fractionTwo;
    cout << endl << endl << "Sum of ";
    fractionOne.displayFraction();
    cout << " + ";
    fractionTwo.displayFraction();
    cout << " = ";
    fractionThree.displayFraction();

    // Display difference
    fractionThree = fractionOne - fractionTwo;
    cout << endl << "Difference of ";
    fractionOne.displayFraction();
    cout << " - ";
    fractionTwo.displayFraction();
    cout << " = ";
    fractionThree.displayFraction();

    // Display product
    fractionThree = fractionOne * fractionTwo;
    cout << endl << "Product of ";
    fractionOne.displayFraction();
    cout << " * ";
    fractionTwo.displayFraction();
    cout << " = ";
    fractionThree.displayFraction();

    // Display quotient
    fractionThree = fractionOne / fractionTwo;
    cout << endl << "Quotient of ";
    fractionOne.displayFraction();
    cout << " ÷ ";
    fractionTwo.displayFraction();
    cout << " = ";
    fractionThree.displayFraction();

    // Display result for "fraction 1 is greater than fraction 2"
    flag = fractionOne < fractionTwo;
    cout << endl << endl << "The expression ";
    fractionOne.displayFraction();
    cout << " < ";
    fractionTwo.displayFraction();
    cout << " is " << boolalpha << flag;

    // Display result for "fraction 1 is greater or equal to fraction 2"
    flag = fractionOne <= fractionTwo;
    cout << endl << "The expression ";
    fractionOne.displayFraction();
    cout << " <= ";
    fractionTwo.displayFraction();
    cout << " is " << boolalpha << flag;

    // Display result for "fraction 1 is smaller than fraction 2"
    flag = fractionOne >= fractionTwo;
    cout << endl << "The expression ";
    fractionOne.displayFraction();
    cout << " > ";
    fractionTwo.displayFraction();
    cout << " is " << boolalpha << flag;

    // Display result for "fraction 1 is smaller or equal to fraction 2"
    flag = fractionOne > fractionTwo;
    cout << endl << "The expression ";
    fractionOne.displayFraction();
    cout << " >= ";
    fractionTwo.displayFraction();
    cout << " is " << boolalpha << flag;

    // Display result for "fraction 1 is equal to fraction 2"
    flag = fractionOne == fractionTwo;
    cout << endl << "The expression ";
    fractionOne.displayFraction();
    cout << " == ";
    fractionTwo.displayFraction();
    cout << " is " << boolalpha << flag;

    // Display result for "fraction 1 is not equal to fraction 2"
    flag = fractionOne != fractionTwo;
    cout << endl << "The expression ";
    fractionOne.displayFraction();
    cout << " != ";
    fractionTwo.displayFraction();
    cout << " is " << boolalpha << flag;

    cout << "\n\nThe fraction " << numeratorOne << "/" << denominatorOne << " is equal to ";
    fractionOne.displayDouble();
    cout << "\nThe fraction " << numeratorTwo << "/" << denominatorTwo << " is equal to ";
    fractionTwo.displayDouble();

    // Goodbye
    cout << "\n\nThanks for using this program! :)";
    return 0;
}

