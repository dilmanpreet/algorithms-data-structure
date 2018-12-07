// Author : Dilmanpreet nandu
// date: 22 November 2018

#ifndef PAYMENT_H
#define PAYMENT_H
#include<string>
using namespace std;
class Payment
{

//All private  methods are defined here
private:
	

	//All public  methods are defined here
public:
double PaymentAmount ;
	Payment();
	Payment(double value);
	void setPayment(double value);
	double getPayment();
	string paymentDetails();

};
#endif
