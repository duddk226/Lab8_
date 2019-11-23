//
// Created by Younga on 22/11/2019.
//

#ifndef LAB8__MYLINKEDLIST_HPP
#define LAB8__MYLINKEDLIST_HPP

#include <iostream>
#include "node.hpp"

template<typename T>
class MyLinkedList {
public:
    node<T> *head = nullptr;
public:
    void pushFront(T data);

    void pushBack(T data);

    void insert(node<T> *prevdata, T data);

    ~MyLinkedList();

};

using namespace std;

template<typename T>
void MyLinkedList<T>::pushFront(T data) {
    node<T> *newNode = new node<T>(data);
    if (head == nullptr) {
        head = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }

}

template<typename T>
void MyLinkedList<T>::pushBack(T data) {
    node<T> *newNode = new node<T>(data);
    node<T> *current = head;

    if (head == nullptr) {
        head = newNode;
    }
    else{
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode; // already next is nullptr as default.

    }
}

template<typename T>
void MyLinkedList<T>::insert(node<T> *prevdata, T data) {
    node<T> *newNode = new node<T>(data);
    node<T> *current = head;
    while (current->next == prevdata) {
        current = current->next;
    }
    node<T> *temp = current->next;
    current->next = newNode;
    newNode->next = temp;
}

template<typename T>
MyLinkedList<T>::~MyLinkedList() {
    node<T> *current = head;
    while(current!= nullptr){
        node<T> *next = current->next;
        cout<<"Deleting:" << current->data << endl;
        delete current;
        current = next;
    }
}

#endif //LAB8__MYLINKEDLIST_HPP