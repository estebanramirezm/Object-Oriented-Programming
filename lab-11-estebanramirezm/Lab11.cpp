/*
Lab #11
Purpose: This program demonstrates exceptions
Author: Esteban Ramirez
Date: Nov 8th 2022
*/

#include <iostream>
#include "Exceptions.h"
using namespace std;

// Function declaration;
int sum();
int subscript();
int allocation();

int main()
{
    // Menu loop
    char repeat = 'Y';
    do
    {
        // Variable declaration
        int option = 0;

        // Selection menu
        cout << "Select an option from the menu:" << endl << endl;
        cout << "1) Generate an Overflow Exception" << endl << "2) Generate a Subscript Exception" << endl << "3) Generate a Memory Exception" << endl << "4) Quit" << endl << endl;
        cout << "What action do you wish to perform? ";
        cin >> option;

        // Input Validation
        while (option < 1 || option > 4)
        {
            cout << endl;
            cout << "That is not a valid option, try again: ";
            cin >> option;
        };

        // Quit early if the user chooses that option
        if (option == 4)
        {
            cout << endl;
            break;
        }

        // Try block that tests different conditions based on input
        try
        {
            // Overflow exception
            if (option == 1)
            {
                int flag = sum();
                if (flag = -1)
                {
                    throw OverflowException();
                }
            }

            // Subscript exception
            if (option == 2)
            {
                int flag = subscript();
                if (flag = -1)
                {
                    throw SubscriptException();
                }
            }

            // Allocation exception
            if (option == 3)
            {
                int flag = allocation();
                if (flag = -1)
                {
                    throw MemoryException();
                }
            }
        }

        catch (OverflowException exception)
        {
            cout << endl << exception.what();
        }

        catch (SubscriptException exception)
        {
            cout << endl << exception.what();
        }

        catch (MemoryException exception)
        {
            cout << endl << exception.what();
        }

        // Repeat program if the user wishes to do so
        cout << endl << endl << "Do you wish to repeat this program? ";
        cin >> repeat;
        cout << endl;

        // Input validation;
        while (repeat != 'y' && repeat != 'Y' && repeat != 'n' && repeat != 'N')
        {
            cout << "That's not a valid option. Input Y or N: ";
            cin >> repeat;
            cout << endl;
        }

        // Break out of the loop if the user wishes to
        if (repeat == 'n' || repeat == 'N')
        {
            break;
        }

    } while (repeat == 'Y' || repeat == 'y');

    // Goodbye message
    cout << "Thanks for running this program! :)" << endl;
    return 0;
}

// Function that adds 1 to an integer until it overflows
int sum()
{
    // Variable
    static int value = 2147483645;

    // Initial message that displays the maximum size an int can hold in C++
    if (value == 2147483645)
    {
        cout << endl << "C++ allows a int to go up to 2147483645 and overflows into the negative past that value" << endl;
    }

    // Display the sum
    cout << endl << "Sum is: " << value;

    // Continue until an exception is detected
    value++;
    if (value > 0)
    {
        sum();
        return 0;
    }
    else
    {
        return -1;
    }
}

// Function that steps out-of-bounds of an array 
int subscript()
{
    // Variables & constant
    const int SIZE = 3;
    static int index = 0;
    int array[SIZE] = { 10, 20, 30 };

    // Initial message that displays the array size
    if (index == 0)
    {
        cout << endl << "Array size is: " << SIZE << endl;
    }

    // Progress message
    cout << endl << "Current array subscript is: " << index << endl;
    cout << "Stored value at this position is: " << array[index] << endl;

    // Continue until an exception is detected
    index++;
    if (index < SIZE)
    {
        subscript();
        return 0;
    }
    else
    {
        return -1;
    }
}

// Function that allocates memory until a bad_alloc exception is detected
int allocation()
{
    // Variables & constant
    static int size = 1;
    int* array;

    // Allocation of a new array & exception handler
    try
    {
        array = new int[size];
    }

    catch (bad_alloc)
    {
        return -1;
    }

    // Progress message
    cout << endl << "Memomy allocated correctly! " << endl;
    cout << "Current array size: " << size << endl;
    cout << "Deallocating the memory..." << endl;

    // Deallocate the array
    delete[] array;

    // Continue until an exception is detected
    size *= 10;
    allocation();

    return 0;
}


