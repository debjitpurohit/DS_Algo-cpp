#include<bits/stdc++.h>
using namespace std;
//double linked list( previous data next) 
class dnode{
    public:
    int data;
    dnode* next;
    dnode* prev;
    //constructor
    dnode(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};
/********************************************************************************************/
void insertathead(dnode* &head, int val){
    dnode* n= new dnode(val);
    n->next = head;
    if(head != NULL){
        head->prev = n;
    }

    head = n;
}
/********************************************************************************************/
void insertattail(dnode* &head, int val){
    dnode* n = new dnode(val);
    if(head == NULL){
        insertathead(head, val);
        return;
    }
    dnode* curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = n;
    n->prev = curr;
} 
/********************************************************************************************/
void printdlinkedlist(dnode* head){
    dnode* curr = head;
    while(curr != NULL){
        cout<<curr->data<<" -> ";
        curr = curr->next;
    }
    cout<<"NULL"<<endl;
}
/********************************************************************************************/
// deletion of head
void deletionathead(dnode* &head){
    if(head == NULL){
        return;
    }
    dnode* temp = head;
    head = head->next;
    delete temp;
}
/********************************************************************************************/
//deletion by key/value not by position
void deletion(dnode* &head, int key){
    if(head == NULL){
        return;
    }
    dnode* curr = head;
    while(curr != NULL){
        if(curr->data == key){
            if(curr->prev != NULL){
                curr->prev->next = curr->next;
            }
            if(curr->next != NULL){
                curr->next->prev = curr->prev;
            }
            delete curr;
            return;
        }
        curr = curr->next;
    }
}




int main()
{
    dnode* head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    insertattail(head, 5);
    insertattail(head, 6);

    insertathead(head, 0);

    printdlinkedlist(head);
    deletion(head, 2);
    printdlinkedlist(head);

    deletionathead(head);
    printdlinkedlist(head);

    return 0;
}