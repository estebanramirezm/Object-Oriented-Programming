#include "Complex.h"
#include <iostream>
using namespace std;

// Constructor
Complex::Complex(double tempReal, double tempImaginary)
{
    real = tempReal;
    imaginary = tempImaginary;
}

// Function that sets the real component of the number
void Complex::setReal(double realInput)
{
    real = realInput;
}
    
// Function that sets the imaginary component of the number
void Complex::setImaginary(double imaginaryInput)
{
    imaginary = imaginaryInput;
}

// Function that adds both imaginary numbers
Complex Complex::add(Complex number)
{
    Complex sum;
    
    sum.real = real + number.real;
    sum.imaginary = imaginary + number.imaginary;
    
    return sum;
}

// Function that subtracts both imaginary numbers
Complex Complex::subtract(Complex number)
{
    Complex diff;
    
    diff.real = real - number.real;
    diff.imaginary = imaginary - number.imaginary;
    
    return diff;
}

// Function prints the sum or difference
void Complex::print()
{
    cout << " " << real << "+" << imaginary << "i\n";
}