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
        cout<<"\n* 6. Delete first     *";
        cout<<"\n* 7. Delete Last      *";
        cout<<"\n* 8. Search Middle    *";
        cout<<"\n* 9. Delete Middle    *";
        cout<<"\n* 10. Exit             *";
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
                list->deleteFirstElement();
                break;
            }
            case 7: {
                list->deleteLastElement();
                break;
            }
            case 8: {
                cout<<"\nThe middle element is: "<<list->searchMiddle();
                break;
            }
            case 9: {
                list->removeMiddle();
                break;
            }
            case 10: {
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

