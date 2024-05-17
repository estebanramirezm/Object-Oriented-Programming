#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
	public:
	
	// Constructor 
	Rational(); 
	
	//set functions
	void setNumerator(int); 
	void setDenominator(int); 

	//get functions
	int getNumerator(); 
	int getDenominator(); 

	//member functions
	void simplifyFraction();
	void displayFraction();
	int commonDivisorFinder(int, int);

	private:
	
	// Variables for the program
	int numerator;
	int denominator; 
	int simpleNumerator;
	int simpleDenominator;
};

#endif 
