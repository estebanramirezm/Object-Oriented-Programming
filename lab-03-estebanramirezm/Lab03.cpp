/*
Lab #3
Purpose: This program asks the user to input a color name and returns it along its wavelength
Author: Esteban Ramirez
Date: Sept 15th 2022
*/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <cmath>

enum Color { YELLOW, ORANGE, RED, GREEN, BLUE, PURPLE };

Color colorInput();
void colorDisplay(Color color);
double colorWavelength(Color color);


// Function that asks the user to input a color name and returns it along its wavelength
int main()
{
    // Variable declaration
    Color input;

    // Greeting
    std::cout << "COLOR WAVELENGHT PROGRAM" << std::endl;

    // User-input & display loop
    std::string repeat = "Y";
    do
    {
        input = colorInput();
        colorDisplay(input);

        std::cout << "The color's wavelength is " << colorWavelength(input) << " meters" << std::endl;
        std::cout << std::endl << "Do you want to do this again? Y/N ";
        std::cin >> repeat;

        while (repeat != "Y" && repeat != "N")
        {
            std::cout << "Input Y or N only: ";
            std::cin >> repeat;
        }

    } while (repeat == "Y");

    // Goodbye
    std::cout << std::endl << "Thanks for using this program! :)" << std::endl;
    return 0;

}

// Function that asks the user to input a color as a string
Color colorInput()
{
    // Variables declaration
    std::string input;
    Color color;

    // User input
    std::cout << std::endl << "Enter a color: ";
    std::cin >> input;
    std::cout << std::endl;

    // User-string to uppercase
    transform(input.begin(), input.end(), input.begin(), &toupper);

    // If statements for each color
    if (input == "YELLOW")
    {
        color = YELLOW;
    }
    else if (input == "ORANGE")
    {
        color = ORANGE;
    }
    else if (input == "RED")
    {
        color = RED;
    }
    else if (input == "GREEN")
    {
        color = GREEN;
    }
    else if (input == "BLUE")
    {
        color = BLUE;
    }
    else if (input == "PURPLE")
    {
        color = PURPLE;
    }
    else
    {
        std::cout << "That's not a valid option. I'm going to replace what you inputted with the default color ~ yellow ~ ." << std::endl << std::endl;
        color = YELLOW;
    }

    return color;
}

// Function that displays what color did the user choose 
void colorDisplay(Color color)
{
    // Switch statement for each color
    switch (color)
    {
    case YELLOW:
        std::cout << "Your chosen color is yellow" << std::endl;
        break;
    case ORANGE:
        std::cout << "Your chosen color is orange" << std::endl;
        break;
    case RED:
        std::cout << "Your chosen color is red" << std::endl;
        break;
    case GREEN:
        std::cout << "Your chosen color is green" << std::endl;
        break;
    case BLUE:
        std::cout << "Your chosen color is blue" << std::endl;
        break;
    case PURPLE:
        std::cout << "Your chosen color is purple" << std::endl;
        break;
    }
}

// Function that displays the chosen color's wavelength
double colorWavelength(Color color)
{
    // Variable declaration
    double wavelength;

    // Switch case for each color
    switch (color)
    {
    case YELLOW:
        wavelength = 570;
        break;
    case ORANGE:
        wavelength = 590;
        break;
    case RED:
        wavelength = 650;
        break;
    case GREEN:
        wavelength = 510;
        break;
    case BLUE:
        wavelength = 475;
        break;
    case PURPLE:
        wavelength = 400;
        break;
    }

    wavelength *= pow(10, 9);

    return wavelength;
}