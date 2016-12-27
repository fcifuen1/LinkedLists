#ifndef NODE_CPP
#define NODE_CPP

#include "Node.h"

template <class T>
Node<T>::Node() : next(NULL) {}

template <class T>
Node<T>::Node(T input) : data(input), next(NULL) {}

template <class T>
Node<T>::~Node() { next = NULL; }

#endif
