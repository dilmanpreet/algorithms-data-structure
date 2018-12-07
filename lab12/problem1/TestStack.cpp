#include "LinkedStack.h"
#include <iostream>

// Author: Dilmanpreet nandu
// date: 27 November 2018



int main() {

	LinkedStack<int> intTest;
	

	//Stack of Int
	cout <<  " The initial size of stack of int is: "<<intTest.getSize() << endl;
	

	intTest.push(1);
	intTest.push(3);
	intTest.push(5);
	intTest.push(7);
	intTest.push(11);
		
	
	cout << "On adding 1 3 5 7 11 in the same order,the size is "<<intTest.getSize();

cout << endl;
	cout<< "and when we pop them we get:";
	while (!intTest.empty())
		cout << intTest.pop() << " ";
	cout << endl;

	return 0;
}
