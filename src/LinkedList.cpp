
#include "LinkedList.h"

/*
TO DO:

*/

// Linked List definitons

/*
Implements linked list default constructor
*/
template <typename T> LinkedList<T>::LinkedList()
{
  head = nullptr;
  tail = nullptr;
}

// Iterator Definitions

template <typename T> LinkedList<T>::Iterator::Iterator()
{
}

// Node Definitions

template <typename T> LinkedList<T>::Node::Node(T data)
{
  prev = nullptr;
  next = nullptr;
  this->data = data;
}