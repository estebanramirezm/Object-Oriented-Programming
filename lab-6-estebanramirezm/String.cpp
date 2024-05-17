#include "String.h"
using namespace Esteban;

// New empty string
String::String()
	: str{ nullptr }
{
	str = new char[1];
	str[0] = '\0';
}

// New string copied from a c-string
String::String(const char* val)
{
	if (val == nullptr) {
		str = new char[1];
		str[0] = '\0';
	}

	else {

		str = new char[strlen(val) + 1];

		// Copy character of val[] using strcpy
		strcpy(str, val);
		str[strlen(val)] = '\0';
	}
}

// Function for setting the string
void String::setString(const String& cString)
{
	str = new char[strlen(cString.str) + 1];
	strcpy(str, cString.str);
	str[strlen(cString.str)] = '\0';
}

// Function that returns the string size
int String::size()
{
	int arraySize;
	arraySize = strlen(str);
	return arraySize;
}

// Function that prints the string 
void String::print()
{
	cout << "The string passed is: ";
	for (int i = 0; str[i] != '\0'; i++)
	{
		std::cout << str[i];
	}
}
