TestPayment:TestPayment.o Payment.o CashPayment.o CreditCardPayment.o
		g++ TestPayment.o Payment.o CashPayment.o CreditCardPayment.o -o TestPayment
TestPayment.o: TestPayment.cpp
		g++ -c TestPayment.cpp
Payment.o: Payment.cpp
		g++ -c Payment.cpp
CashPayment.o: CashPayment.cpp
		g++ -c CashPayment.cpp
CreditCardPayment.o: CreditCardPayment.cpp
		g++ -c CreditCardPayment.cpp