/*
Square class definition
Purpose: This is a source file for the square class, which is user-defined
Author: Esteban Ramirez
Date: Nov 8th 2022
*/

#include "Square.h"

// Functions for Square:
// Function that sets the width (and length since it's the same for a rectangle)
void Square::setWidth(double w) 
{
    width = w;
    length = w;
}

// Function that sets the length (and width since it's the same for a rectangle)
void Square::setLength(double l) 
{   
    length = l;
    width = l;
}

// Function that calculates and returns the perimeter
double Square::getPerimeter() const
{ 
    return (width * 2 + length * 2); 
}

// Function that calculates and returns  the area
double Square::getArea() const
{ 
    return (width * length); 
}

// Function that prints 
void Square::print()
{
    cout << endl;
    cout << "Square: " << endl;
    cout << "The square sides' length is: " << width << endl;
    cout << "The square's perimeter is: " << getPerimeter() << endl;
    cout << "The square's area is: " << getArea() << endl;
}
