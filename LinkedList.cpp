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
void LinkedList<T>::insertHead(T data)
{
    Node<T> *newNode = (Node<T>*)malloc(sizeof(Node<T>));
    
    newNode->data = data;
    newNode->next = NULL;
    
    // Empty list
    if (empty())
    {
        head = newNode;
        tail = head;
    }
    
    // Nonempty list
    else
    {
        newNode->next = head;
        head = newNode;
    }
}
    
template <class T>
void LinkedList<T>::insertTail(T data)
{
    Node<T> *newNode = (Node<T>*)malloc(sizeof(Node<T>));
    
    newNode->data = data;
    newNode->next = NULL;
    
    // Empty list
    if (empty())
    {
        head = newNode;
        tail = head;
    }
    
    // Nonempty list
    else
    {
        tail->next = newNode;
        tail = tail->next;
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
    for (int i = 0; i < n; ++i)
    {
        prev = cur;
        cur = cur->next;
    }
    
    newNode->next = cur;
    
    if (n == 0)
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

template <class T>
void LinkedList<T>::deleteHead()
{
    if (!empty())
    {
        Node<T> *del = head;
        
        // Single node list
        if (size == 1)
        {
            head = NULL;
            tail = NULL;
            
            delete del;
            del = NULL;
        }
        
        // Multinode list
        else if (size > 1)
        {
            head = head->next;
            delete del;
            del = NULL;
        }
    }
}

template <class T>
void LinkedList<T>::deleteTail()
{
    if (!empty())
    {
        Node<T> *cur = head;
        Node<T> *prev = NULL;
        
        // Single node list
        if (cur == tail)
        {
            head = NULL;
            tail = NULL;
            
            delete cur;
            cur = NULL;
            
            return;
        }
        
        // Multinode list
        while (cur != tail)
        {
            prev = cur;
            cur = cur->next;
        }
        
        prev->next = NULL;
        tail = prev;
        delete cur;
        cur = NULL;
    }
}

template <class T>
void LinkedList<T>::deleteNth(int n)
{
    if (head == NULL)
       return head;
    
    Node<T> *cur = head;
    Node<T> *prev = NULL;
    
    if (n != 0)
    {
        for (int i = 0; i < n; ++i)
        {
            prev = cur;
            cur = cur->next;
        }
    
        prev->next = cur->next;
        delete cur;
        cur = NULL;
    }
 
    else
    {
        head = cur->next;
        delete cur;
    }
}
  
#endif
