/*
Rectangle class declaration
Purpose: This is a header file for the rectangle class, which is user-defined
Author: Esteban Ramirez 
Date: Nov 8th 2022
*/

#pragma once
#include "Shape.h"

// Rectangle class - derived from Shape
class Rectangle : public Shape 
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
