#ifndef Node_h
#define Node_h
#include <stdexcept>

using namespace std;

// Author: Dilmanpreet nandu
// date: 27 November 2018

template<typename T>
class Node
{
public:
  T element;  // Element in the node
  Node<T>* next; // Pointer to the next node
  
  Node() 
  {
    next = NULL;
  }
  

Node(T element) 
  {
    this->element = element;
    next = NULL;
  }
  
  
};


#endif

