//
// Created by Younga on 22/11/2019.
//

#ifndef LAB8__NODE_HPP
#define LAB8__NODE_HPP

template<typename T>
class node {
public:
    T data;
    node *next = nullptr;
    node(T data): data{data}{}

};

#endif //LAB8__NODE_HPP
