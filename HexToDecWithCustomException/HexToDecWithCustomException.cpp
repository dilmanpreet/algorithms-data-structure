#include<iostream>
#include <string>
#include <cctype>
#include<math.h>
#include "HexToDec.h"
using namespace std;
int sum = 0;
void addNumbers(int value)
{
	sum += value;
}
int getAnswer() {
	return sum;
}
int HexToDecA(const string& hexString){
	
	char check = ' ';
	int calculateSum = 0;
	 if(hexString.length() == 16)
         if(hexString[0]>7)
            throw HexToDec();
		if (hexString.length() > 16)
			throw HexToDec();
		for (unsigned i = 0; i < hexString.length(); i++)
		{
			check = toupper(hexString[i]);
			if (!isalpha(check) && !isdigit(check)) {
				throw HexToDec();
			}
			else if (isalpha(check)) {

				if (check > 'F' || check < 'A')
					throw HexToDec();
			}
				
				if (check >= '0'&&check<'A')
				{
					calculateSum = hexString[i]-'0';
				}
				if (check == 'A')
					calculateSum = 10;
				if (check == 'B')
					calculateSum = 11;
				if (check == 'C')
					calculateSum = 12;
				if (check == 'D')
					calculateSum = 13;
				if (check == 'E')
					calculateSum = 14;
				if (check == 'F')
					calculateSum = 15;
				calculateSum = calculateSum*(pow(16, (hexString.length()-1-i)));
				
				addNumbers(calculateSum);
			}
		cout << hexString<<" in decimal form is " << getAnswer()<<endl;

	}
int main()
{
	string hexString = "";
	
	
	cout << "Please enter the input:" << endl;
	getline(cin, hexString);
	try {
		HexToDecA(hexString);
     	}
		catch(exception& ex){
			cout << "Invalid Input" << endl;
		

	}

	return 0;
}