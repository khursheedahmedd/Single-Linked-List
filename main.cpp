//
//  main.cpp
//  Linked List
//
//  Created by Macbook on 25/11/2023.
//

#include <iostream>
#include "Linked_List.hpp"

int main() {
    LinkedList *list = new LinkedList();
    
    char ch = 'Y';
    int choice;
    
    do {
        cout<<"\n***** Linked List *****";
        cout<<"\n* 1. Insert at Tail   *";
        cout<<"\n* 2. Insert at Head   *";
        cout<<"\n* 3. Print All        *";
        cout<<"\n* 4. Search           *";
        cout<<"\n* 5. Delete           *";
        cout<<"\n* 6. Exit             *";
        cout<<"\n***********************";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        
        switch(choice) {
            case 1: {
                int num;
                cout<<"\nEnter number to insert: ";
                cin>>num;
                
                list->insertAtTail(num);
                break;
            }
            case 2: {
                int num;
                cout<<"\nEnter a number to insert: ";
                cin>>num;
                
                list->insertAtHead(num);
                break; 
            }
            case 3: {
                list->printAll();
                break;
            }
            case 4: {
                int num;
                cout<<"\nEnter number to search: ";
                cin>>num;
                
                if(list->search(num))
                    cout<<"\nThe number is found.";
                else
                    cout<<"\nThe number is not found.";
                break;
            }
            case 5: {
                int num;
                cout<<"\nEnter number to delete: ";
                cin>>num;
                
                list->remove(num);
                break;
            }
            case 6: {
                cout<<"\nExiting....";
                return 0;
            }
            default:
                cout<<"\nInvalid choice.";
        }
        
        cout<<"\nDo you want to repeat? Press Y: ";
        cin>>ch;
    }while(ch == 'Y' || ch == 'y');
    
    return 0;
}
