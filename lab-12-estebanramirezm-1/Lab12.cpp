/*
Lab #12
Purpose: This program handles student records
Author: Esteban Ramirez
Date: Nov 16th 2022
*/

#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

// Constants definition
const int lastSize = 20;
const int firstSize = 15;

// Structure that handles student records
struct record
{
	char lastName[lastSize];
	char firstName[firstSize];
	int age;
	double gpa;
};

// Functions for the program
void readEntries();
void readSingleEntry();
void addEntry();
void editEntry();

// Function that handles student records
int main()
{
	// Menu loop
	char repeat = 'Y';
	do
	{
		record person;
		string filename;
		int selection;

		// Selection menu
		cout << "Select an option from the menu:" << endl << endl;
		cout << "1) Display Summary List of Entries" << endl << "2) Display an Entry" << endl << "3) Add an Entry"
			<< endl << "4) Edit an Entry" << endl << "5) Quit" << endl << endl;
		cout << "Selection: ";
		cin >> selection;

		// Input validation
		while (selection < 1 || selection > 5)
		{
			cout << endl;
			cout << "That is not a valid option, try again: ";
			cin >> selection;
		};

		//Choose an option
		switch (selection)
		{
		case 1:
		{
			cout << endl << "Summary of all entries" << endl << endl;
			readEntries();
			break;
		}
		case 2:
		{
			cout << endl << "Entry display" << endl << endl;
			readSingleEntry();
			break;
		}
		case 3:
		{
			cout << endl << "Add an entry" << endl << endl;
			addEntry();
			break;
		}
		case 4:
		{
			cout << endl << "Edit an entry" << endl << endl;
			editEntry();
			break;
		}
		case 5:
		{
			cout << endl << "Closing...";
			cout << endl << endl << "Thanks for using this program :)";
			return 0;
		}
		}

		// Repeat program if the user wishes to do so
		cout << endl << endl << "Do you wish to do something more? (Y/N): ";
		cin >> repeat;
		cout << endl;

		// Input validation
		while (repeat != 'y' && repeat != 'Y' && repeat != 'n' && repeat != 'N')
		{
			cout << "That's not a valid option. Input Y or N: ";
			cin >> repeat;
			cout << endl;
		}

	} while (repeat == 'Y' || repeat == 'y');

	// Goodbye 
	cout << "Thanks for using this program :)";
	return 0;
}

// Function that reads all entries
void readEntries()
{
	// Variables declarations & definition
	record person;
	string filename;
	char ch;
	fstream people;
	int recNumber = 0;

	// File selection
	cout << "Enter the file you want to display: ";
	cin >> filename;
	people.open(filename, ios::in | ios::binary);

	// Error handler
	if (!people)
	{
		cout << "ERROR: File cannot be opened or was not found...";
		return;
	}

	// Opening the file for display
	cout << "List of records: ";
	people.read(reinterpret_cast<char*> (&person), sizeof(person));
	while (!people.eof())
	{
		// Record identifier
		cout << endl << endl << "Record #" << recNumber;

		//Display the persons last name
		cout << endl << "Last Name: " << person.lastName;

		//Display persons first name
		cout << endl << "First Name: " << person.firstName;

		//Display persons age
		cout << endl << "Age: " << person.age;

		//Display persons gpa
		cout << endl << "GPA: " << person.gpa;

		//Contents of structure into the file
		people.read(reinterpret_cast<char*>(&person), sizeof(person));
		recNumber++;
	}

	// Close file and return to menu
	people.close();
	cout << endl << endl << "- End of File -";
	cout << endl << endl << "Returning to menu...";
	return;
}

// Function that reads a single entry
void readSingleEntry()
{
	// Variables declaration
	record person;
	string filename;
	char ch;
	fstream people;
	long recordNumber;

	// File selection
	cout << "Enter the file you want to display: ";
	cin >> filename;
	people.open(filename, ios::in | ios::binary);

	// Error handler
	if (!people)
	{
		cout << "ERROR: File cannot be opened or was not found...";
		return;
	}

	else
	{
		// Ask for desired record
		cout << "Which record would you like to see? ";
		cin >> recordNumber;

		// Locate desired record
		people.seekg((recordNumber) * sizeof(person), ios::beg);
		people.read(reinterpret_cast<char*>(&person), sizeof(person));

		// Record identifier
		cout << endl << "Accessing record #" << recordNumber << endl;

		// Display last name
		cout << endl << "Last Name: " << person.lastName;

		// Display  first name
		cout << endl << "First Name: " << person.firstName;

		// Display age
		cout << endl << "Age: " << person.age;

		// Display gpa
		cout << endl << "GPA: " << person.gpa;

		people.seekp(recordNumber * sizeof(person), ios::beg);
		people.write(reinterpret_cast<char*>(&person), sizeof(person));
	}

	// Close file and return to menu
	people.close();
	cout << endl << endl << "- End of record -";
	cout << endl << endl << "Returning to menu...";
	return;
}

// Function that adds an entry
void addEntry()
{
	// Variables declaration
	record person;
	string filename;
	char repeat = 'Y';
	fstream people;

	// File selection
	cout << "Enter the file you want to access (a new file will be created if it doesn't exist): ";
	cin >> filename;
	cout << endl;

	// Open the file and add the entry
	people.open(filename, ios::in | ios::out | ios::binary | ios::app);
	
	// Input for last name
	cout << "Last name? ";
	cin >> person.lastName;

	// Input for first name
	cout << "First name? ";
	cin >> person.firstName;

	// Input for age
	cout << "Age? ";
	cin >> person.age;

	// Input for GPA
	cout << "GPA? ";
	cin >> person.gpa;

	// Contents of structure into the file
	people.write(reinterpret_cast<char*>(&person), sizeof(person));

	// Close file and return to menu
	people.close();
	cout << "Returning to menu...";
	return;
}

// Function that edits an entry
void editEntry()
{
	// Variables declaration
	string filename;
	char ch;
	long recordNumber;
	record person;

	// File selection
	cout << "Enter the file you want to access";
	cin >> filename;
	fstream people(filename, ios::in | ios::out | ios::binary);

	// Error handler
	if (!people)
	{
		cout << "ERROR: File can not be opened or was not found...";
		return;
	}

	// Record selection
	cout << "\n\nWhich record you want to edit? ";
	cin >> recordNumber;
	people.seekg(recordNumber * sizeof(person), ios::beg);
	people.read(reinterpret_cast<char*>(&person), sizeof(person));

	// Record identifier
	cout << endl << "Accessing record #" << recordNumber << endl;

	// Display last name
	cout << endl << "Last Name: " << person.lastName;

	// Display  first name
	cout << endl << "First Name: " << person.firstName;

	// Display age
	cout << endl << "Age: " << person.age;

	// Display gpa
	cout << endl << "GPA: " << person.gpa;

	// Input for last name
	cout << "Last name? ";
	cin >> person.lastName;

	// Input for first name
	cout << "First name? ";
	cin >> person.firstName;

	// Input for age
	cout << "Age? ";
	cin >> person.age;

	// Input for GPA
	cout << "GPA? ";
	cin >> person.gpa;

	// Close file and return to menu
	people.seekp(recordNumber * sizeof(person), ios::beg);
	people.write(reinterpret_cast<char*>(&person), sizeof(person));
	people.close();
	cout << "Returning to menu...";
	return;
}
