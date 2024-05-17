/*
Lab #10
Purpose: This program prints some user-defined objects, using polymorphism
Author: Esteban Ramirez 
Date: Nov 8th 2022
*/

#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include "Square.h"
using namespace std;

// Additional function for the program
void shapePrinter(Shape *s);

int main()
{
    // Objects & pointers creation
    Shape *s;
    Rectangle rectangle;
    Triangle triangle;
    Circle circle;
    Square square;
    
    // Variables declaration & default initialization
    double length = 1, width = 1, sideA = 1, sideB = 1, sideC = 1, radius = 1, squareSide = 0;
    
    // Greeting
    cout <<"POLYMORPHIC SHAPES PROGRAM" << endl << endl;
    cout << "We're going to do some fun stuff with shapes!" << endl << endl;
    
    // Rectangle object definition
    cout << "Please input the length of a rectangle: ";
    cin >> length;
    rectangle.setLength(length);
    cout << "Please input the width of a rectangle: ";
    cin >> width;
    rectangle.setWidth(width);
    
    // Triangle object definition
    cout << endl << endl << "Please input side A of a triangle: ";
    cin >> sideA;
    triangle.setSideA(sideA);
    cout << "Please input side B of a triangle: ";
    cin >> sideB;
    triangle.setSideB(sideB);
    cout << "Please input side C of a triangle: ";
    cin >> sideC;
    triangle.setSideC(sideC);
    
    // Circle object definition
    cout << endl << "Please input the radius of a circle: ";
    cin >> radius;
    circle.setRadius(radius);
    
    // Square object definition
    cout << endl << "Please input the length of square (remember all 4 sides are equal): ";
    cin >> squareSide;
    square.setLength(squareSide);
    
    // Print the objects
    s = &rectangle; 
    shapePrinter(s); 
    s = &triangle; 
    shapePrinter(s); 
    s = &circle; 
    shapePrinter(s); 
    s = &square; 
    shapePrinter(s); 

    // Goodbye
    cout << endl << "Thanks for running this program! :)" << endl;
    return 0;
}

// Function that calls the print function of an object 
void shapePrinter(Shape *s)
{
    s->print();
}

