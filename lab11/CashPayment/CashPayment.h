// Author : Dilmanpreet nandu
// date: 22 November 2018
	
#ifndef CASHPAYMENT_H
#define CASHPAYMENT_H
#include "Payment.h"
using namespace std;
class CashPayment : public Payment
{
//all public methods defined here
public:
	CashPayment();
	CashPayment(double amount);
	string paymentDetails();
};
#endif

