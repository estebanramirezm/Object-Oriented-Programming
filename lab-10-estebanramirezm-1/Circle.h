/*
Circle class declaration
Purpose: This is a header file for the circle class, which is user-defined
Author: Esteban Ramirez 
Date: Nov 8th 2022
*/

#pragma once
#include "Shape.h"

// Circle class - derived from Shape
class Circle : public Shape 
{
private:
    double radius;
    const double PI = 3.1415926535;

public:
    void setRadius(double);
    double getPerimeter() const;
    double getArea() const;
    void print();
};
