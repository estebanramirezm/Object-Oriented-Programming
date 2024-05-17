#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
    private: 
    double real;
    double imaginary;
    
    public:
    Complex(double = 0.0, double = 0.0);
    void setReal(double);
	void setImaginary(double);
	Complex add(Complex);
    Complex subtract(Complex);
    void print();
};

#endif