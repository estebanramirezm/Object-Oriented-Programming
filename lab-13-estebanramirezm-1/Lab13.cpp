/*
Lab #13
Purpose: Demonstrates linked lists
Author: Esteban Ramirez
Date: December 4th 2022
*/

#include <iostream>
#include <cstring>
#include "List.h"
using namespace std;


int main()
{

	// Variables and objects
	LinkedList<int> linkedList;
	int num;
	int selection;
	char repeat = 'Y';

	// Greeting
	cout << "LINKED-LISTS DEMONSTRATOR" << endl << endl;

	// Initialize the list with default values
	int num1(30);
	int num2(8);
	int num3(2003);
	int num4(10);
	int num5(47);
	int num6(21);
	linkedList.appendNode(num1);
	linkedList.appendNode(num2);
	linkedList.appendNode(num3);
	linkedList.appendNode(num4);
	linkedList.appendNode(num5);
	linkedList.appendNode(num6);

	do
	{
		// Selection menu
		cout << "Select an option from the menu:" << endl << endl;
		cout << "1) Add a value to the list" << endl << "2) Delete a value from the list" << endl << "3) Display the list"
			<< endl << "4) Quit" << endl << endl;
		cout << "Selection: ";
		cin >> selection;

		// Input validation
		while (selection < 1 || selection > 4)
		{
			cout << endl;
			cout << "That is not a valid option, try again: ";
			cin >> selection;
		};

		// Selection handler
		switch (selection)
		{
			// Add a value
		case 1:
		{
			cout << endl << "Enter a new value for the List" << endl;
			cin >> num;
			linkedList.appendNode(num);
			break;
		}
		// Delete a Value
		case 2:
		{
			// Second option delete a value
			int removedElement;
			cout << endl << "Which element do you want to delete from the list?";
			cin >> removedElement;
			linkedList.deleteNode(removedElement);
			break;
		}
		// Display the list
		case 3:
		{
			linkedList.displayList();
			break;
		}
		// Quit
		case 4:
		{
			// Last option to just quit the program
			cout << endl << "Closing..." << endl;
			repeat = 'N';
			break;
		}

		}
	} while (repeat == 'Y');

	// Goodbye
	cout << endl << "Thanks for using this program" << endl;
	return 0;
}