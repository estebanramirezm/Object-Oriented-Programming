#pragma once
#pragma warning(disable:4996)
#pragma warning(disable:4267)
#ifndef STRING_H
#define STRING_H
#include <cstring>
#include <iostream>
using namespace std;
namespace Esteban
{
    class String
    {
    private:
        char* str;

    public:
        // Constructor with no arguments 
        String();

        // Constructor with 1 argument
        String(const char* val);

        // Destructor
        ~String() { delete str; }

        // Set string function
        void setString(const String& cString);

        // String size function
        int size();

        // Print function
        void print();
    };
}

#endif
