#ifndef LINKEDLIST_CPP
#define LINKEDLIST_CPP

#include "LinkedList.h"

template <class T>
LinkedList<T>::LinkedList() : size(0), head(NULL), tail(NULL) {}

template <class T>
LinkedList<T>::~LinkedList() { clear(); }
    
template <class T>
int LinkedList<T>::size() const { return size; }
    
template <class T>
bool LinkedList<T>::empty() const { return (head == NULL && tail == NULL); }

template <class T>
void LinkedList<T>::insert(T data)
{
    Node<T> *newNode = (Node*)malloc(sizeof(Node<T>));
    
    newNode->data = data;
    newNode->next = NULL;
    
    // Empty list
    if (head == NULL)
        head = newNode;
    
    // Nonempty list
    else
    {
        newNode->next = head;
        head = newNode;
    }
}
    
template <class T>    
void LinkedList<T>::insertNth(int n)
{
    Node<T> *cur = head;
    Node<T> *prev = NULL;
    Node<T> *newNode = (Node<T>*)malloc(sizeof(Node<T>));
    
    newNode->data = data;
    newNode->next = NULL;
    
    // Empty list
    if (empty())
    {
        head = newNode;
        return;
    }
        
    // Go to n'th position
    for (int i = 0; i < position; ++i)
    {
        prev = cur;
        cur = cur->next;
    }
    
    newNode->next = cur;
    
    if (position == 0)
        head = newNode;
    
    if (prev != NULL)
        prev->next = newNode;
}
  
template <class T>
void LinkedList<T>::clear()
{
  while (!empty())
  {
    // If only 1 node, erase it and set front/rear pointers to NULL
    if (head == tail)
    {
      Node<T>* temp = tail;

      head = NULL;
      tail = NULL;

      delete temp;
      temp = NULL;

      size--;
    }

    // Use a temp node to save the node to delete and adjust the front pointer
    else
    {
      Node<T>* temp = head;
      head = head->next;

      delete temp;
      temp = NULL;

      size--;
    }
  }
}

#endif
