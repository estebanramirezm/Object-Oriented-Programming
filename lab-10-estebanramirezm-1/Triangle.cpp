/*
Triangle class definition
Purpose: This is a source file for the triangle class, which is user-defined
Author: Esteban Ramirez
Date: Nov 8th 2022
*/

#include "Triangle.h"

// Function that sets the side A
void Triangle::setSideA(double a) 
{
    sideA = a;
}

// Function that sets the side B
void Triangle::setSideB(double b) 
{
    sideB = b;
}

// Function that sets the side C
void Triangle::setSideC(double c) 
{
    sideC = c;
}


// Function that calculates and returns the perimeter
double Triangle::getPerimeter() const
{
    return (sideA + sideB + sideC); 
}

// Function that calculates and returns the area
double Triangle::getArea() const
{ 
    double s = (sideA + sideB + sideC) / 2; 
    return sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
}

// Function that prints 
void Triangle::print()
{
    cout << endl;
    cout << "Triangle:"<< endl; 
    cout << "The triangle sides are: " << sideA << " " << sideB << " " << sideC << endl;
    cout << "The triangle's perimeter is: " << getPerimeter() << endl;
    cout << "The triangle's area is: " << getArea() << endl;
}

