/*
Exceptions Header File
Purpose: This header file defines some custom exceptions
Author: Esteban Ramirez
Date: Nov 8th 2022
*/
#pragma once
#include <exception>
using namespace std;

// Overflow exception handler
class OverflowException : public exception
{
public:
    const char* what () const throw() 
    {
        return "Exception: Arithmetic overflow detected";
    }
};

// Subscript out-of-bounds exception handler
class SubscriptException : public exception
{
public:
    const char* what() const throw ()
    {
        return "Exception: Out-of-bounds subscript detected";
    }
};

// Bad memory allocation exception handler
class MemoryException : public exception
{
public:
    const char* what() const throw ()
    {
        return "Exception: Bad memory allocation detected";
    }
};
