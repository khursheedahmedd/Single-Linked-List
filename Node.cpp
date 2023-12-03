//
//  Node.cpp
//  Linked List
//
//  Created by Macbook on 25/11/2023.
//

#include "Node.hpp"

Node::Node() {
    next = NULL;
    data = 0;
}

void Node::setData(int num) {
    data = num;
}
int Node::getData() {
    return data;
}

void Node::setNext(Node* next) {
    this->next = next;
}
Node* Node::getNext() {
    return next;
}

