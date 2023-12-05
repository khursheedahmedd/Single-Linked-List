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
//    ~LinkedList();
    void insertAtTail(int);
    void insertAtHead(int);
    bool search(int);
    void printAll();
    void remove(int);
    bool isEmpty();
    void deleteFirstElement();
    void deleteLastElement();
    int searchMiddle();
    void removeMiddle();
    void printReverse(Node* node);
    void printReverseList();
    void removeDuplicates();
    void segregateEvenOdd();
    LinkedList mergeLists(LinkedList list1, LinkedList list2);
    
    
};

#endif /* Linked_List_hpp */

