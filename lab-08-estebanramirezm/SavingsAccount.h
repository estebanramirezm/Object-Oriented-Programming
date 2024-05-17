/*
Lab #8 - Savings Account class.h file
Purpose : This header file declares the SavingsAccount class with its members
Author : Esteban Ramirez
Date : Oct 24th 2022
*/

#pragma once
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
using namespace std;

namespace Esteban
{
    // Class that holds a savings account's data 
    class SavingsAccount
    {
    private:
        double balance;
        static double interestRate;

    public:
        static void setInterestRate(const double);
        void setBalance(const double);
        double getBalance();
        void calcMonthlyInterest();
    };
}

#endif
