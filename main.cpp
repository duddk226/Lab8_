#include <iostream>
#include "node.hpp"
#include "MyLinkedList.hpp"

template<typename T,typename DLL>
void printLinkedList(DLL &x){
    node<T> *head = x.head;
    while(head!= nullptr){
        cout<< head->data << endl;
        head = head ->next;
    }
}

int main() {
    MyLinkedList<int> k;
    k.pushBack(3);
    k.pushFront(1);
    k.insert(k.head,2);
    printLinkedList<int>(k);

    MyLinkedList<string> x;
    x.pushBack("c");
    x.pushFront("a");
    x.insert(x.head,"b");
    printLinkedList<string>(x);

}