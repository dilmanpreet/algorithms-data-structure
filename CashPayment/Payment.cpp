// Author : Dilmanpreet nandu
// date: 22 November 2017

#include "Payment.h"
#include<sstream>
Payment::Payment()
{
	PaymentAmount = 0;
}

Payment::Payment(double value)
{
	PaymentAmount = value;
}

void Payment::setPayment(double value)
{
	PaymentAmount = value;
}

double Payment::getPayment()
{
	return PaymentAmount;
}

string Payment::paymentDetails()
{
	string pay = "The payment amount is ";
	stringstream ss;
	string str = "";
	ss << getPayment();
	ss >> str;
	pay += str;
	return pay;
}
