/*
Lab #8 - Savings Account class .cpp file
Purpose: This header file defines the SavingsAccount class members
Author: Esteban Ramirez
Date: Oct 24th 2022
*/

#include "SavingsAccount.h"
using namespace Esteban;

// Static member variable definition
double SavingsAccount::interestRate = 0.0;

// Function that sets the interest rate from user's input
void SavingsAccount::setInterestRate(const double interest)
{
    interestRate = interest;
}

// Function that sets the balance from user's input
void SavingsAccount::setBalance(const double userBalance)
{
    balance = userBalance;
}

// Function that returns the current balance
double SavingsAccount::getBalance()
{
    return balance;
}

// Function that updates the balance adding the earned interest 
void SavingsAccount::calcMonthlyInterest()
{
    balance += balance * (interestRate / 12);
}