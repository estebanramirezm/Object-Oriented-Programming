/*
Project:    CS 1415 Lab #6
File:       CS1415Lab06.cpp
Purpose:    Driver program for the String class
Author:     Garth Sorenson
Updated:    6 Feb 2020
*/

// INCLUDE
#include <iostream>
#include "String.h"
using namespace std;
using namespace Esteban;

// NAMED CONSTANTS
const int SIZE = 80;

// FUNCTIONS
/*
Purpose:    Controls program demonstrating the String class
Input:      One string
Output:     Two strings along with their sizes
*/
int main()
{
	String str1("Hello World"), str2;
	char str[SIZE];

	// Display greeting
	cout << "This program demonstrates the String class." << endl << endl;
	
	// Demonstrate the Explicit-value Constructor, print, and size member functions
	cout << "Explicit Value Constructor:" << endl;
	cout << "\"";
	str1.print();
	cout << "\"\tSize: ";
	cout << str1.size();
	cout << endl << endl;

	// Demonstrate the set, print, and size member functions
	cout << "Set Member Function:" << endl;
	cout << "Enter a string: ";
	cin.getline(str, 80);
	str2.setString(str);
	cout << "\"";
	str2.print();
	cout << "\"\tSize: ";
	cout << str2.size();
	cout << endl << endl;

	return 0;
}