#include<bits/stdc++.h>
using namespace std;
class node{
    public: 
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtHead(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        n->next = n;
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        insertAtHead(head, val);
        return;
    }
    node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}
void deleteAtHead(node* &head){
    node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    node* todelete = head;
    temp->next = head->next;
    head = head->next;
    delete todelete;
}
void deletion(node* &head, int pos){
    node* temp = head;
    if(pos == 1){
      deleteAtHead(head);
        return;
    }
    int count = 1;
    while(count != pos-1){
        temp = temp->next;
        count++;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}


void printList(node* head){
    node* temp = head;
    do{
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }while(temp != head);
    cout<<endl;
}

void evenAfterOdd(node* &head){
    node* odd = head;
    node* even = head->next;
    node* evenStart = even;
    while(odd->next != NULL && even->next != NULL){
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenStart;
    if(odd->next != NULL){
        even->next = NULL;
    }
}

int main()
{
    node* head = NULL;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    for(int i=0; i<9; i++){
        insertAtTail(head, arr[i]);
    }
    // insertAtTail(head, 1);
    // insertAtTail(head, 2);
    // insertAtTail(head, 3);
    // insertAtTail(head, 4);
    // insertAtHead(head, 5);
    // insertAtHead(head, 6);
    // insertAtHead(head, 7);
    printList(head);
    // deletion(head, 3);
    // printList(head);
    // deleteAtHead(head);
    // printList(head);
    evenAfterOdd(head);
    printList(head);
     

    return 0;
}