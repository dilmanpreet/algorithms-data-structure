// Author : Dilmanpreet nandu
// expDate: 22 November 2017

#include "CreditCardPayment.h"
#include <sstream> 
using namespace std;
CreditCardPayment::CreditCardPayment()
{
	name = "";
	expDate = 0;
	number = 0;
	setPayment(0);
}

CreditCardPayment::CreditCardPayment(string cname, int eDate, int cNum, int payAmount)
{
	name = cname;
	expDate = eDate;
	number = cNum;
	setPayment(payAmount);
}

string CreditCardPayment::paymentDetails()
{
	string pay = "A payment made by ";
	pay+=name;
	pay +=" In the Amount: ";
	stringstream ss;
	string str = "";
	ss << getPayment();
	ss >> str;
	pay += str;
	return pay;
}
