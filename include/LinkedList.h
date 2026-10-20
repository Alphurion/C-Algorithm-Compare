#ifndef LinkedList_H
#define LinkedList_H

/*
Implements a standard Linked List. It uses both merge sort
and heap sort.
*/
template <typename T> class LinkedList
{
private:
  // ADT Node for Linked List.
  class Node
  {
  public:
    Node(T data);
    ~Node();
    friend class LinkedList;

  private:
    T data;
    Node *next, *prev;
  };

  // Public Linked List indexer iterator.
  class Iterator
  {
  private:
  Node* current;
  public:
  friend class LinkedList;

  Iterator();
  Iterator(T data);
  Iterator(Node data);
  ~Iterator();

  Iterator operator=(Iterator rhs);
  };

  Node *head, *tail;

public:
  // Constructors
  LinkedList();
  ~LinkedList();
  // List operations
  void pushBack(T data);                   // O(1)
  void pushFront();                        // O(1)
  void swap(Iterator &lhs, Iterator &rhs); // O(1)
  // Sorting Functions
  void mergeSort();
  void bubbleSort();
};

#endif