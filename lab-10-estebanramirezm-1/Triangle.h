/*
Triangle class declaration
Purpose: This is a header file for the triangle class, which is user-defined
Author: Esteban Ramirez 
Date: Nov 8th 2022
*/

#pragma once
#include "Shape.h"

// Rectangle class - derived from Shape
class Triangle : public Shape 
{
private:
    double sideA;
    double sideB;
    double sideC;

public:
    void setSideA(double);    
    void setSideB(double);
    void setSideC(double);
    double getPerimeter() const;
    double getArea() const;
    void print();
};
