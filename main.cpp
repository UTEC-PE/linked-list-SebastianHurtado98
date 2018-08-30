#include <iostream>
#include "node.h"
#include "iterator.h"
#include "list.h"

using namespace std;

int main() {

    /* pruebas
    List<int> myList;
    myList.push_back(10);
    myList.push_front(9);
    myList.push_back(10);
    List<int> myListString;
    myListString.push_back(111);
    myListString.push_front(1111);
    myList.concat(myListString);
    myList.print();
    cout << endl;
    myListString.print(); */
    List<int> myList;
    myList.push_front(1);
    myList.push_front(2);
    myList.push_front(3);
    Iterator<int> i;
    i = myList.begin();
    cout << *i;


}