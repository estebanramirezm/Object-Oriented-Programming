/*
Lab #8
Purpose: This program calculates the interest rate for two accounts on two consecutive months at variable interest rates
Author: Esteban Ramirez
Date: Oct 24th 2022
*/

#include <iostream>
#include "SavingsAccount.h"
using namespace std;
using namespace Esteban;

// This function calculates the interest rate for two accounts on two consecutive months at variable interest rates
int main()
{
    // Variable & Object definition
    double interest, balanceOne, balanceTwo;
    SavingsAccount accOne, accTwo;

    // Greeting
    cout << "Savings Account Program\n\n";
    cout << "Creating 2 new accounts...\n\n";

    // Get the user's input
    cout << "Enter the balance for the first account: ";
    cin >> balanceOne;
    cout << "Enter the balance for the second account: ";
    cin >> balanceTwo;
    cout << "What's the interest rate for these accounts? (in decimal percentage): ";
    cin >> interest;

    // Set the balances and interest rate
    accOne.setBalance(balanceOne);
    accTwo.setBalance(balanceTwo);
    SavingsAccount::setInterestRate(interest);

    // Calculate the updated balance
    accOne.calcMonthlyInterest();
    accTwo.calcMonthlyInterest();

    // Display updated balance
    cout << endl;
    cout << "After the first month, account one's balance is: " << accOne.getBalance() << endl;
    cout << "After the first month, account two's balance is: " << accTwo.getBalance() << endl;

    // Get the user's input for the second's month interest and pass it to the class member 
    cout << "\nWhat's the next month's interest rate for these accounts? (in decimal percentage): ";
    cin >> interest;
    SavingsAccount::setInterestRate(interest);

    // Calculate the updated balance
    accOne.calcMonthlyInterest();
    accTwo.calcMonthlyInterest();

    // Display updated balance
    cout << endl;
    cout << "After the second month, account one's balance is: " << accOne.getBalance() << endl;
    cout << "After the second month, account two's balance is: " << accTwo.getBalance() << endl;

    // Goodbye 
    cout << "\nThanks for running this program :)" << endl;
    return 0;
}
