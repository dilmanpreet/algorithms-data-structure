
#include "Account.h"



//A no-arg constructor to creates a default account with id 0, balance 0, and annualInterestRate 0.
Account::Account()
{
	id = 0;								
	balance = 0;						
	annualInterestRate = 0;				
}

//A constructor with data field named id, double data field named balance, double data field named annualInterestRate 
Account::Account(int ID, double Balance, double annualInterestR)
{
	id = ID;							
	balance = Balance;						
	annualInterestRate = annualInterestR;		
}

// these programs below return the id , balance, and the annual interest rate
int Account::getId()
{
	return id;
}
double Account::getBalance()
{
	return balance;
}

double Account::getAnnualInterestRate()
{
	return annualInterestRate;
}

// these programs below sets the given id as id, the new balance as old balance and sets a new Annual Interest Rate
void Account::setId(int ID)
{
	id = ID;
}

void Account::setBalance(double Balance)
{
	balance = Balance;
}

void Account::setAnnualInterestRate(double annualInterestR)
{
	annualInterestRate = annualInterestR;
}

//this function getMonthlyInterestRate() returns the monthly interest rate
double Account::getMonthlyInterestRate()
{
	return getAnnualInterestRate() / 12;
}

//this function withdraw(amount) withdraws a specified amount from the account
void Account::withdraw(double amount)
{
	balance -= amount;
}
//this function deposit(amount) deposits a specified amount to the account
void Account::deposit(double amount)
{
	balance += amount;
}
