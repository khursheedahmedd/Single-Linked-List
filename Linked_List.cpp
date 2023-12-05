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
         
//         cout<<"\nThe node is inserted successfully.";
     }
     else {
         Node* temp = head;
         while (temp->getNext() != nullptr) {
             temp = temp->getNext();
         }
         temp->setNext(newNode);
         count++;
         
//         cout<<"\nThe node is inserted succussfully.";
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
    if(isEmpty()) {
        cout<<"\nThe list is empty.";
        return;
    }
    
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
}

void LinkedList::remove(int key) {
    if(isEmpty()) {
        cout<<"\nThe list is empty.";
        return;
    }
    
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


void LinkedList::deleteFirstElement() {
    
    if(isEmpty()) {
        cout<<"\nThe list is empty.";
        return;
    }
    
    Node* temp = head;
    head = temp->getNext();
    
    delete temp;
    
    count--;
    
    cout<<"\nThe first node is deleted succussfully.";
}

void LinkedList::deleteLastElement() {
    if(isEmpty()) {
        cout<<"\nThe list is empty.";
        return;
    }
    
    Node* curr = head;
    Node* prev = NULL;
    
    if(curr->getNext() == NULL) {
        head = NULL;
        delete curr;
        
        count--;
        
        cout<<"\nThe lats node is deleted successfully.";
        return;
    }
    
    while (curr->getNext() != NULL) {
        prev = curr;
        curr = curr->getNext();
    }
    
    prev->setNext(NULL);
    delete curr;
    
    cout<<"\nThe node is deleted successfully.";
}

int LinkedList::searchMiddle() {
    if(isEmpty()) {
        cout<<"\nThe list empty. Returning -1.";
        return -1;
    }
    Node* temp = head;
    
    if(count == 2) {
        return temp->getData();
    }
    
    int c = count/2;
    
    while (c !=0) {
        temp = temp->getNext();
        c--;
    }
    return temp->getData();

}

void LinkedList::removeMiddle() {
    if(isEmpty()) {
        cout<<"\nThe list is empty.";
        return;
    }

    Node* slowPtr = head;
    Node* fastPtr = head;
    Node* prev = nullptr;

    while (fastPtr != nullptr && fastPtr->getNext() != nullptr) {
        fastPtr = fastPtr->getNext()->getNext();
        prev = slowPtr;
        slowPtr = slowPtr->getNext();
    }

    prev->setNext(slowPtr->getNext());
    delete slowPtr;
    cout << "Middle node deleted successfully.";
}


void LinkedList::printReverse(Node* node) {
    if (node == nullptr) {
        return;
    }
    printReverse(node->getNext());
    cout << node->getData() << " ";
}

// Call this function from outside to start printing the list in reverse
void LinkedList::printReverseList() {
    cout << "Reversed Linked List: ";
    printReverse(head);
    cout << endl;
}


void LinkedList::removeDuplicates() {
    Node* current = head;

    while (current != nullptr && current->getNext() != nullptr) {
        if (current->getData() == current->getNext()->getData()) {
            Node* temp = current->getNext();
            current->setNext(temp->getNext());
            delete temp;
        } else {
            current = current->getNext();
        }
    }

    cout << "Duplicates removed successfully." <<endl;
}

void LinkedList::segregateEvenOdd() {
    if (head == nullptr || head->getNext() == nullptr) {
        cout << "List is empty or has only one node." << endl;
        return;
    }

    LinkedList evenList;
    LinkedList oddList;

    Node* current = head;

    while (current != nullptr) {
        if (current->getData() % 2 == 0) {
            evenList.insertAtTail(current->getData());
        } else {
            oddList.insertAtTail(current->getData());
        }
        current = current->getNext();
    }

    cout << "\nEven elements list: ";
    evenList.printAll();

    cout << "\nOdd elements list: ";
    oddList.printAll();
}

LinkedList LinkedList::mergeLists(LinkedList list1, LinkedList list2) {
    LinkedList mergedList = list1; 

    Node* curr = list2.head;

    while (curr != nullptr) {
        mergedList.insertAtTail(curr->getData());
        curr = curr->getNext();
    }

    return mergedList;
}

