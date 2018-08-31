//
// Created by sebastian on 8/24/18.
//

#ifndef LINKEDLIST_NODE_H
#define LINKEDLIST_NODE_H

template <typename T>
struct Node {
    T data;
    struct Node* next;

    void killSelf(); // No se implementó
};


#endif //LINKEDLIST_NODE_H
