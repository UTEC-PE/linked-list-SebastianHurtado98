#ifndef LIST_H
#define LIST_H

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

        void print_reverse(Node<T>* head);

    public:
        List();

        int front();
        int back();
        void push_front(T value);
        void push_back(T value);
        void pop_front();
        void pop_back();
        T get(int position);
        void concat(List<T> &other);
        bool empty();
        int size();
        void print();
        void print_reverse();
        void clear();
        Iterator<T> begin();
        Iterator<T> end();

        ~List();
};

List::List(){
  head=NULL;
  tail=NULL;

}

List:: int front(){
  return head;
}
List:: int back(){
  return tail;
}

List:: void push_front(T value){
  if(head==NULL){
    head= value;
    tail= value;
  }
  else{
    Node<T>* temp;
    temp=head;
    head=value;
    value.next=temp;
  }
}

List:: void push_back(T value){
  if(head==NULL){
    head= value;
    tail= value;
  }
  else{
    tail.next= value;
    value.next=NULL;
    tail= value;
  }
}
List:: void pop_front(){

  //borrar el puntero
  head=head.next;

}
List::void pop_back(){
  Node<T>* temp=head;
  while(temp.next!=tail){
    temp=temp.next;
  }
  temp.next= NULL;
}

List:: T get(int position){
  Node<T>* temp=head;
  for (int i=0; i<position; i++){
    temp=temp.next;
  }

  return temp.data;
}

List::void concat(List<T> &other){
  tail.next= other.head;
  //que hago con el tail?
}

List:: bool empty(){
  return NULL==head;
}

List:: int size(){
  return nodes;
}

List::void print(){
  Node<T>* temp=head;
  while (temp!=NULL){
    cout << temp.data << endl;
    temp=temp.next;
  }
}

List:: void print_reverse(Node<T>* head){
  if(head.next==NULL){
    cout << head.data;
  }
  else{
    print_reverse(head.next);
  }
}

List:: void print_reverse(){
  print_reverse(head);
}

#endif
