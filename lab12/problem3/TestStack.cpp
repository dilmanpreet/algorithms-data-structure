#include "Stack.h"
#include <iostream>
#include "LinkedList.h"
// Author: Dilmanpreet nandu
// date: 30 November 2017

int main() {

	Stack<int> intTest;
	Stack<string> testString;
	Stack<char> charTest;

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
	cout << endl;
	cout << endl;

	cout <<  " The initial size of stack with char is: "<<charTest.getSize() << endl;
	charTest.push('D');
	charTest.push('I');
	charTest.push('L');
	charTest.push('M');
	charTest.push('A');
	charTest.push('N');
	cout<<"The first element in the stack is:"<<charTest.peek()<<endl;
	//Stack of char
	cout << "On adding D I L M A N in the same order, the size is "<<charTest.getSize()<<endl;
	cout<<"All the elements in reverse order are ";
	while (!charTest.empty())
		cout << charTest.pop() << " ";
	
	cout << endl;
	cout << endl;
	cout << endl;
	//Stack of string
	cout <<  " The initial size of stack with string is: "<<testString.getSize() << endl;
	testString.push("Dilman");
	testString.push("Lives");
	testString.push("in");
	testString.push("Vancouver");
	
	cout << "On adding Dilman lives in Vancouver"<<endl;
	cout<<"The first element in the stack is "<<testString.peek()<<endl;
	cout<<"All the elements in reverse order are ";
	while (!testString.empty())
		cout << testString.pop() << " ";
	

	return 0;
}
