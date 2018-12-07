// Author : Dilmanpreet nandu
// date: 22 November 2018

#include "Payment.h"
#include "CashPayment.h"
#include"CreditCardPayment.h"
#include <iostream>
using namespace std;

int main()
{
	Payment pay(1000);
	cout<<pay.paymentDetails()<<endl;
	
	CashPayment Cash(500);
	cout << Cash.paymentDetails()<<endl;
	
	CreditCardPayment Credit("TEST NAME", 2020, 789456123, 50);
	cout <<  Credit.paymentDetails()<<endl;
	return 0;
}