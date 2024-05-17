/*
Rectangle class definition
Purpose: This is a source file for the rectangle class, which is user-defined
Author: Esteban Ramirez
Date: Nov 8th 2022
*/

#include "Rectangle.h"

// Function that sets the width
void Rectangle::setWidth(double w) 
{
    width = w;
}

// Function that sets the length
void Rectangle::setLength(double l) 
{
    length = l;
}

// Function that calculates and returns the perimeter
double Rectangle::getPerimeter() const
{ 
    return (width * 2 + length * 2); 
}

// Function that calculates and returns  the area
double Rectangle::getArea() const
{ 
    return (width * length); 
}

// Function that prints 
void Rectangle::print()
{   
    cout << endl;
    cout << "Rectangle:"<< endl;
    cout << "The rectangle length is: " << length << " and the width is: " << width << endl;
    cout << "The rectangle's perimeter is: " << getPerimeter() << endl;
    cout << "The rectangle's area is: " << getArea() << endl;
}

