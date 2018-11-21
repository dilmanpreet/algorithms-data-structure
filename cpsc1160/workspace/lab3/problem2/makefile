TestAccount: TestAccount.o Account.o
		g++ TestAccount.o Account.o -o TestAccount
TestAccount.o: TestAccount.cpp Account.h
		g++ -c TestAccount.cpp
Account.o: Account.cpp Account.h
		g++ -c Account.cpp