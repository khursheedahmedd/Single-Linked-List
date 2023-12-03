//
//  Linked_List.hpp
//  Linked List
//
//  Created by Macbook on 25/11/2023.
//

#ifndef Linked_List_hpp
#define Linked_List_hpp
#include "Node.hpp"

class LinkedList {
private:
    Node* head;
    int count;
    
public:
    LinkedList();
    ~LinkedList();
    void insertAtTail(int);
    void insertAtHead(int);
    bool search(int);
    void printAll();
    void remove(int);
    bool isEmpty();
    
    
    
};

#endif /* Linked_List_hpp */
