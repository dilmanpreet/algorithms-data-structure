#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <stdexcept>
using namespace std;



template<typename T>
class Node
{
public:
  T element;  // Element in the node
  Node<T>* next; // Pointer to the next node

Node(T element) 
  {
    this->element = element;
    next = nullptr;
  }
  
  Node() 
  {
    next = nullptr;
  }

  
};

template<typename T>
class Iterator: public std::iterator<std::forward_iterator_tag, T>
{
public:
  Iterator(Node<T>* newNode)
  {
    current = newNode;
  }
  T& operator*()
  {
    return current->element;
  }
  Iterator operator++() 
  {
    current = current->next;
    return *this;
  }
  bool operator==(const Iterator<T>& itrtr)
  {
    return current == itrtr.current;
  }

  bool operator!=(const Iterator<T>& itrtr)
  {
    return current != itrtr.current;
  }
  Iterator operator++(int dummy)
  {
    Iterator temp(current);
    current = current->next;
    return temp;
  }

private:
  Node<T>* current;
};

template<typename T>
class LinkedList
{
private:
  Node<T>* head;
  Node<T>* tail;
  int size;
public:
  LinkedList();
  LinkedList(const LinkedList<T>& LinkdList);
  virtual ~LinkedList();
  void addFirst(T element);
  void addLast(T element);
  T getFirst() const;
  T removeFirst() throw (runtime_error);
  T getLast() const;
  T removeLast();
  void add(T element);
  void add(int index, T element);
  void clear();
  bool contains(T element) const;
  T get(int index) const;
  int indexOf(T element) const;
  bool isEmpty() const;
  int lastIndexOf(T element) const;
  void remove(T element);
  int getSize() const;
  T removeAt(int index);
  T set(int index, T element);

  Iterator<T> begin() const
  {
    return Iterator<T>(head);
  }

  Iterator<T> end() const
  {
    return Iterator<T>(tail->next);
  }


};

template<typename T>
LinkedList<T>::LinkedList()
{
	
	// both head and tail are null
	size = 0;
  head = nullptr;
 tail = nullptr;
  
}

template<typename T>
LinkedList<T>::LinkedList(const LinkedList<T>& LinkdList)
{
	size = 0;
  head = nullptr;
 tail = nullptr;
  
  Node<T>* currentElement = LinkdList.head;
  while (currentElement != nullptr)
  {
    this->add(currentElement->element);
    currentElement = currentElement->next;
  }
}

template<typename T>
LinkedList<T>::~LinkedList()
{
  clear();
}

template<typename T>
void LinkedList<T>::addFirst(T element)
{
  Node<T>* newNode = new Node<T>(element);
  newNode->next = head;
  head = newNode;
  size++;

  if (tail == nullptr)
    tail = head;
}

template<typename T>
void LinkedList<T>::addLast(T element)
{
  if (tail == nullptr)
  {
    head = tail = new Node<T>(element);
  }
  else
  {
    tail->next = new Node<T>(element);
    tail = tail->next;
  }

  size++;
}

template<typename T>
T LinkedList<T>::getFirst() const
{
  if (size == 0)
    throw runtime_error("Index out of range");
  else
    return head->element;
}

template<typename T>
T LinkedList<T>::getLast() const
{
  if (size == 0)
    throw runtime_error("Index out of range");
  else
    return tail->element;
}

template<typename T>
T LinkedList<T>::removeFirst() throw (runtime_error)
{
  if (size == 0)
   throw runtime_error("No elements in the list");
  else
  {
    Node<T>* temp = head;
    head = head->next;
    if (head == nullptr) tail = nullptr;
    size--;
    T element = temp->element;
    delete temp;
    return element;
  }
}

template<typename T>
T LinkedList<T>::removeLast()
{
  if (size == 0)
    throw runtime_error("No elements in the list");
  else if (size == 1)
  {
    Node<T>* temp = head;
    head = tail = nullptr;
    size = 0;
    T element = temp->element;
    delete temp;
    return element;
  }
  else
  {
    Node<T>* current = head;

    for (int i = 0; i < size - 2; i++)
      current = current->next;

    Node<T>* temp = tail;
    tail = current;
    tail->next = nullptr;
    size--;
    T element = temp->element;
    delete temp;
    return element;
  }
}

template<typename T>
void LinkedList<T>::add(T element)
{
  addLast(element);
}

template<typename T>
void LinkedList<T>::add(int index, T element)
{
  if (index == 0)
    addFirst(element);
  else if (index >= size)
    addLast(element);
  else
  {
    Node<T>* current = head;
    for (int i = 1; i < index; i++)
      current = current->next;
    Node<T>* temp = current->next;
    current->next = new Node<T>(element);
    (current->next)->next = temp;
    size++;
  }
}

template<typename T>
void LinkedList<T>::clear()
{
  while (head != nullptr)
  {
    Node<T>* temp = head;
    head = head->next;
    delete temp;
  }

  tail = nullptr;
  size = 0;
}

template<typename T>
T LinkedList<T>::get(int index) const
{
  if (index < 0 || index > size - 1)
    throw runtime_error("Index out of range");

  Node<T>* current = head;
  for (int i = 0; i < index; i++)
    current = current->next;

  return current->element;
}

template<typename T>
int LinkedList<T>::indexOf(T element) const
{

  Node<T>* current = head;
  for (int i = 0; i < size; i++)
  {
    if (current->element == element)
      return i;
    current = current->next;
  }

  return -1;
}

template<typename T>
bool LinkedList<T>::isEmpty() const
{
  return head == nullptr;
}

template<typename T>
int LinkedList<T>::getSize() const
{
  return size;
}

template<typename T>
T LinkedList<T>::removeAt(int index)
{
  if (index < 0 || index >= size)
    throw runtime_error("Index out of range");
  else if (index == 0)
    return removeFirst();
  else if (index == size - 1)
    return removeLast();
  else
  {
    Node<T>* previous = head;

    for (int i = 1; i < index; i++)
    {
      previous = previous->next;
    }

    Node<T>* current = previous->next;
    previous->next = current->next;
    size--;
    T element = current->element;
    delete current;
    return element;
  }
}

  // The functions remove(T element), lastIndexOf(T element),
  // contains(T element), and set(int index, T element) are
  // left as an exercise

#endif

