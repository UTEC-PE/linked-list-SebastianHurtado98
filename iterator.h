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
    Iterator(){
        current= nullptr;
    };
    Iterator(Node<T>* node){
        current= node;
    };

    Iterator<T> operator=(Iterator<T> node){ // Falta retornar el iterator, osea *this
        current= node.current;
    };
    bool operator!=(Iterator<T> cmp){
        return current!=cmp.current;
    };
    Iterator<T> operator++(){
        current=current->next; // Falta retornar el iterator
    };
    T operator*(){
        return current->data;
    };
};

#endif //LINKEDLIST_ITERATOR_H
