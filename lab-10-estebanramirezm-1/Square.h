/*
Square class declaration
Purpose: This is a header file for the square class, which is user-defined
Author: Esteban Ramirez 
Date: Nov 8th 2022
*/

#pragma once
#include "Shape.h"
#include "Rectangle.h"

// Square class - derived from Rectangle
class Square: public Rectangle 
{
private:
    double width;
    double length;

public:
    void setWidth(double);
    void setLength(double);
    double getPerimeter() const;
    double getArea() const;
    void print();
};
