#ifndef ACCOUNT_H

#define ACCOUNT_H
class Account
{
	
	//All the private methods are created here
private:
	int id;			//data field named id for the account.
	double balance;	//double data field named balance for the account.
	double annualInterestRate;	//double data field named annualInterestRate that stores the current interest rate


	//All the public methods are created here
public:
	Account();	//default constructor
	Account(int ID, double Balance, double annualInterestR);	

	//The accessor and mutator functions for id, balance, and annualInterestRate are created below
	void setId(int ID);
	void setBalance(double Balance);
	void setAnnualInterestRate(double annualInterestR);


	int getId();
	double getBalance();
	double getAnnualInterestRate();

	//function named getMonthlyInterestRate() that returns the monthly interest rate
	double getMonthlyInterestRate();	

	//function named withdraw(amount) that withdraws a specified amount from the account
	void withdraw(double amount);

	//function named deposit(amount) that deposits a specified amount to the account
	void deposit(double amount);
	
};
	
#endif	