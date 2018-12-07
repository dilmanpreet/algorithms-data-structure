// Author : Dilmanpreet nandu
// date: 22 November 2018


#include "CashPayment.h"
#include "Payment.h"
#include<sstream>
using namespace std;
CashPayment::CashPayment()
{
	setPayment(0);
}
CashPayment::CashPayment(double amount)
{
	setPayment(amount);
}

string CashPayment::paymentDetails()
{
	string paid = "An amount of Cash received: ";
	stringstream ss;
	string str = "";
	ss << getPayment();
	ss >> str;
	paid += str;
	return paid;
}
