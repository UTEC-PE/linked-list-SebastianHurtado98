//
// Created by sebastian on 8/24/18.
//

#ifndef LINKEDLIST_ITERATOR_H
#define LINKEDLIST_ITERATOR_H

#include "node.h"

template <typename T>
class Iterator {
private:
    Node<T>* current;

public:
    Iterator();
    Iterator(Node<T>* node);

    Iterator<T> operator=(Iterator<T> node);
    bool operator!=(Iterator<T> cmp);
    Iterator<T> operator++();
    T operator*();
};

#endif //LINKEDLIST_ITERATOR_H
