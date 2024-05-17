/*
Lab #1
Purpose: This program asks the user for a string and then counts how many vowels/consonants (or both) the string has
Author: Esteban Ramirez 
Date: Sept 1st 2022
*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// Constant declaration
const int LENGTH = 101;

// Functions declaration
int countVowels(char *);
int countConsonants(char *);

// This program asks the user for a string and then counts how many vowels/consonants (or both) the string has
int main()
{
    // Variables and Arrays
	char list[LENGTH], choice;	

	// Greeting
	cout << "V O W E L S  A N D  C O N S O N A N T S" << endl << endl; 

	// String Input
	cout << "Enter a string (max characters = " << LENGTH-1 << ") \n";
	cin.getline(list, LENGTH);

	// Char counter menu 
	do
	{
		cout << endl << "PROGRAM MENU\n";
		cout << "A) Count the number of vowels in the string\n";
		cout << "B) Count the number of consonants in the string\n";
		cout << "C) Count both the vowels and consonants in the string\n";
		cout << "D) Enter another string\n";
		cout << "E) Exit the program\n";
		cout << endl << "Select an option: ";
		cin  >> choice;
		choice = toupper(choice);

		switch (choice)
		{
		    case 'A': 
				cout << endl << "Vowels in \"" <<  list << "\": " << countVowels(list) << endl;
				break;
			case 'B': 
			    	cout << endl << "Consonants in \"" <<  list << "\": " << countConsonants(list) << endl;
				break;
			case 'C': 
			    	cout << endl << "Vowels and consonants in \"" << list << "\": " << (countVowels(list) + countConsonants(list)) << endl;
			    	break;
			case 'D': 
			   	cout << endl << "Enter a string (max characters = " << LENGTH-1 << ") \n";
				cin.ignore();
				cin.getline(list, LENGTH);
			case 'E': 
			    break;

			default:
			cout << endl << "That’s not a valid option. Try again" << endl;
		}	
	} while (choice != 'E');

	// Goodbye
	cout << endl << "Thanks for using this program!" << endl;
	return 0;
}

/*This function accepts a C-string as its argument. 
Then, it counts the number of vowels in the string and returns that number*/
int countVowels(char *chars)
{
	int count = 0;

	for (int i = 0; i < strlen(chars); i++)
	{
		if (toupper(chars[i]) == 'A' || 
			toupper(chars[i]) == 'E' ||
			toupper(chars[i]) == 'I' ||
			toupper(chars[i]) == 'O' ||
			toupper(chars[i]) == 'U'
		   )
			count++;
	}
	return count;
}

/*This function accepts a C-string as its argument. 
Then, it counts the number of consonants in the string and returns that number*/
int countConsonants(char *chars)
{
	int count = 0;

	for (int i = 0; i < strlen(chars); i++)
	{
		if (isalpha(chars[i]))
			count++;
	}

	return count - countVowels(chars);
}