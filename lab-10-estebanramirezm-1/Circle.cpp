/*
Circle class definition
Purpose: This is a source file for the circle class, which is user-defined
Author: Esteban Ramirez
Date: Nov 8th 2022
*/

#include "Circle.h"

// Functions for Circle:
// Function that sets the radius
void Circle::setRadius(double r)
{
    radius = r;
}

// Function that calculates and returns the perimeter
double Circle::getPerimeter() const
{
    return (radius * 2 * PI);
}
// Function that calculates and returns the area
double Circle::getArea() const
{
    return (radius * radius * PI);
}

// Function that prints 
void Circle::print()
{
    cout << endl;
    cout << "Circle:"<< endl; 
    cout << "The circle radius is: " << radius << endl;
    cout << "The circle's perimeter is: " << getPerimeter() << endl;
    cout << "The circle's area is: " << getArea() << endl;
}

