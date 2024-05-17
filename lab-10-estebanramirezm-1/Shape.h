/*
Shape class declaration
Purpose: This is a header file for the shape class, which is an abstract class that serves as a blueprint for specific shape classes
Author: Esteban Ramirez 
Date: Nov 8th 2022
*/

#pragma once
#include <iostream>
using namespace std;

// Abstract base class
class Shape 
{
public:
    // Function to get the perimeter
    virtual double getPerimeter() const = 0;
    // Function to get the area.
    virtual double getArea() const = 0;
    // Function to print.
    virtual void print() = 0;
};




