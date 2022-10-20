#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
 //constructor
    node(int val){
        data = val;
        next = NULL;
    }
};
void insertattail(node* &head, int val){

    node* temp = new node(val);// value field e va; and adress e null
    if(head == NULL){
        head = temp;
        return;
    }
    node* curr = head;
    while(curr->next != NULL){ // jokhon head/curr er adress/next null hye jabe toto khon obdi cholbe bcz null houa manei ses 
        curr = curr->next;
    }
    curr->next = temp;
}
void printlinkedlist(node* head){
    node* curr = head;
    while(curr != NULL){
        cout<<curr->data<<" -> ";
        curr = curr->next;
    }
    cout<<"NULL"<<endl;
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
 int arr[] = {1,2,3,4,5,6,7,8,9,10};
    for(int i = 0; i<10; i++){
        insertattail(head, arr[i]);
    }
    printlinkedlist(head);

    evenAfterOdd(head);
    printlinkedlist(head);
    return 0;
}