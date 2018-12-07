#ifndef LinkedStack_h
#define LinkedStack_h
#include <stdio.h>
#include <iostream>
#include "Node.h"

// Author: Dilmanpreet nandu
// date: 27 November 2018

template<typename T>
class LinkedStack
{
	public:
		LinkedStack();
		bool empty();
		T peek() const;
		void push(T value);
		T pop();
		int getSize();
	private:
		Node<T>* top;
		int size;
};


template<typename T>
LinkedStack<T>::LinkedStack(){
    size=0;
    
}
template<typename T>
bool LinkedStack<T>::empty(){
    if(getSize()==0){
        
    }
    return 0;
}

template<typename T>
int LinkedStack<T>::getSize(){
    return (size);
}

template<typename T>
T LinkedStack<T>::peek() const{
     if(top.isEmpty()){
         cout << "Nothing to return" << endl;
         
         return NULL;
    }
    else{
        size = getSize();
        return top.get(size-1);
    }
}

template<typename T>
void LinkedStack<T>::push(T value){
    size++;
    return (top.());
}

template<typename T>
T LinkedStack<T>::pop(){
    size--;
	return top.();
}

#endif
