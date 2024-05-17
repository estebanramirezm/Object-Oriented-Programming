/*
Lab #7
Purpose: This program encrypts and decrypts files with a simple algorithm
Author: Esteban Ramirez
Date: October 13th 2022
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// Functions declaration
void fileEncrypt();
void fileDecrypt();

// Function that encrypts and decrypts files with a simple algorithm
int main()
{
	// Variable declaration
	int selection;

	// Greeting
	cout << "FILE ENCRYPTER / DECRYPTER" << endl << endl;
	cout << "Note: this algorithm adds 10 to the internal value of the character, making it change and thus, encrypting it. " <<
		endl << "This process is performed in reverse to decrypt the file." << endl << endl;

	// Selection menu
	cout << "Select an option from the menu:" << endl << endl;
	cout << "1) Encrypt a file" << endl << "2) Decrypt a file" << endl << "3) Quit" << endl << endl;
	cout << "What action do you wish to perform? ";
	cin >> selection;

	// Input validation
	while (selection < 1 || selection > 3)
	{
		cout << endl;
		cout << "That is not a valid option, try again: ";
		cin >> selection;
	};

	// Encryption / Decryption / Quit
	switch (selection) {
	case 1:
		cout << endl;
		fileEncrypt();
		break;
	case 2:
		cout << endl;
		fileDecrypt();
		break;
	case 3:
		cout << endl;
		cout << "Thanks for using this program! :)";
		return 0;
	}

	// Goodbye message
	cout << endl << "Thanks for using this program! :)";
	return 0;
}

// Function that encrypts files with a simple algorithm
void fileEncrypt()
{
	string fileName, encryptedFile;
	char ch;

	// Unencrypted file input
	cout << "Which file do you wish to encrypt? ";
	cin >> fileName;

	// File opening error handler
	fstream inFile(fileName, ios::in);
	if (!inFile)
	{
		cout << "Error: Can't open file \"" << fileName << "\".\n";
		return;
	}

	// Set name for new file
	cout << "What's the name for the new file? ";
	cin >> encryptedFile;

	// Simple encryption method
	fstream outFile(encryptedFile, ios::out);

	inFile.get(ch);
	while (!inFile.fail())
	{
		ch += 10;
		outFile << ch;
		inFile.get(ch);
	}

	// Close file and return to main 
	inFile.close();
	outFile.close();
	return;
}

// Function that decrypts files with a simple algorithm
void fileDecrypt()
{
	string encryptedFile, decryptedFile;
	char ch;

	// File to decrypt input
	cout << "Which file do you want to decrypt? ";
	cin >> encryptedFile;

	// File opening error handler
	fstream inFile(encryptedFile, ios::in);
	if (!inFile)
	{
		cout << "Error: Can't open file \"" << encryptedFile << "\".\n";
		return;
	}

	// Set name for new file
	cout << "Enter name for the decrypted file: ";
	cin >> decryptedFile;

	// Simple decryption method
	fstream outFile(decryptedFile, ios::out);
	inFile.get(ch);
	while (!inFile.fail())
	{
		ch -= 10;
		outFile << ch;
		inFile.get(ch);
	}

	// Close file and return to main 
	inFile.close();
	outFile.close();
	return;
}
