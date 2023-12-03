//
//  Node.hpp
//  Linked List
//
//  Created by Macbook on 25/11/2023.
//

#ifndef Node_hpp
#define Node_hpp
#include <iostream>
using namespace std;

class Node {
private:
    int data;
    Node* next;
    
public:
    Node();
    
    void setData(int);
    void setNext(Node* next);
    int getData();
    Node* getNext();
};

#endif /* Node_hpp */
