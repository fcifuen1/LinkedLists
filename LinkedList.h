#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h" // <iostream>

template <class T>
class LinkedList
{
  public:
    LinkedList();
    ~LinkedList();
    
    // Returns the number of nodes in the list
    int size() const;
    
    // Returns whether a list has data or not
    bool empty() const;
  
    // Inserts a node at the head
    void insertHead(T data);
  
    // Inset a node at the tail
    void insertTail(T data);
    
    // Inserts a node into the nth position 
    void insertNth(int n);
  
    // Erases a list object
    void clear();
  
    // Deletes the node at the head
    void deleteHead();
  
    // Deletes the node at the tail
    void deleteTail();
  
    // Deletes the node at the nth position
    void deleteNth(int n);
  
  private:
    int size;
    Node<T>* head;
    Node<T>* tail;
};

#include "LinkedList.cpp"

#endif
