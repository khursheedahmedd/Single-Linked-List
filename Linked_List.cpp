//
//  Linked_List.cpp
//  Linked List
//
//  Created by Macbook on 25/11/2023.
//

#include "Linked_List.hpp"

LinkedList::LinkedList(): head(NULL) {
    count = 0;
}

bool LinkedList::isEmpty() {
    return head == NULL;
}

void LinkedList::insertAtTail(int val) {
    
    Node* newNode = new Node();
    newNode->setData(val);
    
     if (isEmpty()) {
         head = newNode;
         count++;
         
         cout<<"\nThe node is inserted successfully.";
     }
     else {
         Node* temp = head;
         while (temp->getNext() != nullptr) {
             temp = temp->getNext();
         }
         temp->setNext(newNode);
         count++;
         
         cout<<"\nThe node is inserted succussfully.";
     }
}

void LinkedList::insertAtHead(int num) {
    Node* newNode = new Node();
    newNode->setData(num);
    
    if(head == nullptr) {
        head = newNode;
        newNode->setNext(NULL);
        count++;
        
        cout<<"\nThe node is inserted succussfully.";
    }
    else {
        newNode->setNext(head);
        head = newNode;
        count++;
        
        cout<<"\nThe node is inserted successfully.";
    }
    
}

bool LinkedList::search(int key) {
    if(isEmpty()) {
        cout<<"\nThe list is empty.";
        return false;
    }
   
    Node* temp = head;
    
    while (temp->getNext() != NULL) {
        if(temp->getData() == key) {
            return true;
        }
        temp = temp->getNext();
    }
    
    return false;
}

void LinkedList::printAll() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
}

void LinkedList::remove(int key) {
    Node* curr = head;
    Node* prev = nullptr;
    
    if(curr->getNext() != NULL && curr->getData() == key) {
        head = curr->getNext();
        delete  curr;
        
        cout<<"\nThe node is deleted successfully.";
        return;
    }
    
    while (curr != NULL && curr->getData() != key) {
        prev = curr;
        curr = curr->getNext();
    }
    if(curr == nullptr) {
        cout<<"\nThe node is not found in list.";
        return;
    }
    
    if (prev != nullptr) {
           prev->setNext(curr->getNext());
       } else {
           head = curr->getNext();
       }
    
    delete curr;
    
    cout<<"\nThe node is deleted successfully.";
}

