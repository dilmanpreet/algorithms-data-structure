#ifndef Stack_h
#define Stack_h
#include <stdio.h>
#include <iostream>
#include "LinkedList.h"

// Author: Dilmanpreet nandu
// date: 30 November 2017
using namespace std;
template<typename T>
class Stack
{
	public:
		Stack();
		bool empty() const;
		T peek() const;
		void push(T value);
		T pop();
		int getSize() const;
	private:
		LinkedList<T> elements;
};
template<typename T>
Stack<T>::Stack(){
}
template<typename T>
bool Stack<T>::empty() const{
	return (elements.isEmpty());
}
template<typename T>
int Stack<T>::getSize() const{
	return elements.getSize();
}
template<typename T>
T Stack<T>:: peek() const{  
	if(elements.isEmpty()){
		cout << "Sorry nothing to peek \n The stack is empty" << endl;
		return NULL;
	}
	return elements.get(getSize()-1);
}
template<typename T>
void Stack<T>::push(T value){
	elements.add(value);
}
template<typename T>
T Stack<T>::pop(){
	return elements.removeLast();
}

#endif
