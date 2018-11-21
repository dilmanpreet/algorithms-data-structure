
#include <iostream>
#include "Account.h"
using namespace std;


//main method for test account
int main()
{
	//test program that creates an Account object with an account ID of 1122, a balance of $20000, and an annual interest rate of 4.5%
	Account dilmanAccount(1122, 20000, 4.5);
	
	//withdraw function to withdraw $2500
	dilmanAccount.withdraw(2500);
	
	//deposit function to deposit $3000
	dilmanAccount.deposit(3000);
	
	//print the balance, and the monthly interest
	cout << "The Account Balance is " << dilmanAccount.getBalance() << endl;
	cout << "The Monthly interest rate is " << dilmanAccount.getMonthlyInterestRate()<<endl;	
	
	return 0;
}