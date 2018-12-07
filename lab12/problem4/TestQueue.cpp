#include <iostream>
#include "Queue.h"

int main() {
   
    Queue<string> testString;
    Queue<int> intTest;
	Queue<char> charTest;
	
    
	//Stack of Int
	cout <<  " The initial size of stack of int is: "<<intTest.getSize() << endl;
	

	intTest.enqueue(1);
	intTest.enqueue(3);
	intTest.enqueue(5);
	intTest.enqueue(7);
	intTest.enqueue(11);
		
	
	cout << "On adding 1 3 5 7 11 in the same order,the size is "<<intTest.getSize();

cout << endl;
    for(int i = 0; i < intTest.getSize() -1 ; i++){
        cout << intTest.getElement(i) << " , ";
    }
    cout << intTest.getElement(intTest.getSize()-1) <<"."<< endl;
    intTest.dequeue();
    intTest.dequeue();
    intTest.dequeue();
    cout<<"Now if we dequeue 3 elements, the size becomes "<<intTest.getSize(); 
    cout<<" And the elements left in the queue are ";
    for(int i = 0; i < intTest.getSize() -1 ; i++){
        cout << intTest.getElement(i) << " , ";
    }
    cout << intTest.getElement(intTest.getSize()-1) <<"."<< endl;
    cout << endl;


	cout <<  " The initial size of stack with char is: "<<charTest.getSize() << endl;
	charTest.enqueue('D');
	charTest.enqueue('I');
	charTest.enqueue('L');
	charTest.enqueue('M');
	charTest.enqueue('A');
	charTest.enqueue('N');
	
	//Stack of char
	cout << "On adding D I L M A N in the same order, the size is "<<charTest.getSize()<<endl;
	 for(int i = 0; i < charTest.getSize() -1 ; i++){
        cout << charTest.getElement(i) << " , ";
    }
    cout << charTest.getElement(charTest.getSize()-1) << "."<<endl;
    charTest.dequeue();
    charTest.dequeue();
    charTest.dequeue();
    charTest.dequeue();
    cout<<"Now if we remove 4 element, the size becomes "<<charTest.getSize(); 
    cout<<" And the element left in the queue is ";
    for(int i = 0; i < charTest.getSize() -1 ; i++){
        cout << charTest.getElement(i) << " , ";
    }
    cout << charTest.getElement(charTest.getSize()-1) <<"."<< endl;
    cout << endl;
	cout << endl;
	//Stack of string
	cout <<  " The initial size of stack with string is: "<<testString.getSize() << endl;
	testString.enqueue("Dilman");
	testString.enqueue("Lives");
	testString.enqueue("in");
	testString.enqueue("Vancouver");
	
	cout << "On adding Dilman lives in Vancouver"<<endl;
	
	cout<<"All the elements in reverse order are ";
	
	for(int i = 0; i < testString.getSize() -1 ; i++){
        cout << testString.getElement(i) << " , ";
    }
    cout << testString.getElement(testString.getSize()-1) <<"."<< endl;
    
    testString.dequeue(); 
    
	cout<<"Now if we dequeue 1 element, the size becomes "<<testString.getSize(); 
    cout<<" And the elements left in the queue are ";
    for(int i = 0; i < testString.getSize() -1 ; i++){
        cout << testString.getElement(i) << " , ";
    }
    cout << testString.getElement(testString.getSize()-1) <<"."<< endl;
    
    return 0;
}
