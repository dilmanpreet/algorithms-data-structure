#ifndef Queue_h
#define Queue_h
#include "LinkedList.h"

using namespace std;
template<typename T>
class Queue: public LinkedList<T>
{
	public:
		Queue();
		void enqueue(T element);
		T dequeue() ;
		T getElement(int index);
		int getSize() const;
};
template<typename T>
Queue<T>::Queue()
{
}
template<typename T>
void Queue<T>::enqueue(T element)
{
	LinkedList<T> :: addLast(element);
}
template<typename T>
T Queue<T>::getElement(int index)
{
		return LinkedList<T> :: get(index);
}
template<typename T>
T Queue<T>::dequeue()
{
	return LinkedList<T> :: removeFirst();
}

template<typename T>
int Queue<T>::getSize() const
{
	return LinkedList<T> :: getSize();
}
#endif 
