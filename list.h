//
// Created by sebastian on 8/24/18.
//

#ifndef LINKEDLIST_LIST_H
#define LINKEDLIST_LIST_H

#include <iostream>
#include "node.h"
#include "iterator.h"

using namespace std;

template <typename T>

class List {
private:
    Node<T>* head;
    Node<T>* tail;
    int nodes;
    void print_reverse(Node<T>* head)
    {
        if(head) {
            print_reverse(head->next);
            cout << head->data << endl;
        }
    };


public:
    List(){
        head= nullptr;
        tail= nullptr;
        nodes=0;
    };

    T front(){
        if (head==nullptr){
            cout <<"Lista vacia";
        }
        else {
            return head->data;
        }
    };

    T back(){
        if (tail== nullptr)
        {
            cout << "Lista vacia";
        }
        else{
            return tail->data;
        }
    };

    void push_front(T value){

        auto *n= new Node<T>();

        if(head==nullptr){
            n->data= value;
            n->next= nullptr;
            head=n;
            tail=n;
        }
        else{
        n->data= value;
        n->next= head;
        head= n;
        }
        nodes++;
    };

    void push_back(T value){

        auto *n= new Node<T>();

        if(head==nullptr) {
            n->data= value;
            n->next= nullptr;
            head=n;
            tail=n;
        }
        else{
            n->data = value;
            n->next = nullptr;
            tail->next=n;
            tail = n;
        }
        nodes++;
    };

    void pop_front(){

        if (head==nullptr){
            cout << "La lista esta vacia";
        }
        else{
            auto n= head;
            n=n->next;
            delete head;
            head=n;
            nodes--;
        }
    };

    void pop_back(){

        if(tail==nullptr) {
            cout << "La lista esta vacia";
        }
        else {
            auto n = head;
            for (int i = 0; i < nodes - 1; i++) {
                n = n->next;
            }
            delete tail;
            tail = n;
            nodes--;

        }
    };

    T get(int position){
        if(position>=nodes)
        {
            cout << "Posicion no existe";
        }
        else{
            auto n= head;
            for (int i=0; i<position; i++){
                n=n->next;
            }
            return n->data;
        }
    };

    void concat(List<T> &other){
        if(!empty() && !other.empty()){
        tail->next= other.head;
        tail= other.tail;
        nodes=nodes+other.nodes;
        other.head= head;
        other.nodes= nodes;

        }
        else{
            cout <<"Alguna de las dos listas no contiene elementos.";
        }
    };

    bool empty(){
        return head==nullptr;
    };

    int size(){
        return nodes;
    };

    void print(){
        if (!empty()){
        auto n= head;
        for (int i=0; i<nodes; i++){
            cout << n->data;
            n=n->next;
        }

        }
        else{
            cout << "No hay elementos en la lista";
        }

    };
    void print_reverse(){
        print_reverse(head);
    };

    void clear(){
        auto n= head;
        while(head!= nullptr){
            n=n->next;
            delete head;
            head=n;
        }
        nodes=0;
    };

    /*Iterator<T> begin();
    Iterator<T> end();

    ~List();*/


};

#endif
