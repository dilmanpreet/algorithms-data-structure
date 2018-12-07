// Author : Dilmanpreet nandu
// date: 22 November 2018

#ifndef CREDITCARDPAYMENT_H
#define CREDITCARDPAYMENT_H
#include "Payment.h"

class CreditCardPayment : public Payment
{
//All private  methods and variables are defined here
private:
	string name;
	int expDate;
	int number;
//All public  methods are defined here
public:

	CreditCardPayment();
	CreditCardPayment(string cname, int eDate, int cNum, int payAmount);
	string paymentDetails();

};
#endif
