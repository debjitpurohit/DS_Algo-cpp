#include<bits/stdc++.h>
using namespace std;
//singly linked list
// node of a linked list have value and adress of next node
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
/********************************************************************************************/
// head by reference bcz amader list ta k modify krte hbe 
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
/********************************************************************************************/
void insertathead(node* &head, int val){
    node* temp = new node(val);
    temp->next = head;
    head = temp;
}
/********************************************************************************************/
// head by value bcz andr kichu modify drkar nei
void printlinkedlist(node* head){
    node* curr = head;
    while(curr != NULL){
        cout<<curr->data<<" -> ";
        curr = curr->next;
    }
    cout<<"NULL"<<endl;
}
/********************************************************************************************/
//searching of a node by value
bool search(node* head, int key){
    node* curr = head;
    while(curr != NULL){
        if(curr->data == key){
            return true;//1
        }
        curr = curr->next;
    }
    return false;//0
}
/********************************************************************************************/
// deletoin of head 
void deletionathead(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}
/********************************************************************************************/
//deletetion of node other than head and tail
void deletion(node* &head,int val){

    if(head==NULL){
        return;
    }
    if(head->next == NULL){
        deletionathead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data != val){
        temp = temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;

    delete todelete;

}
/********************************************************************************************/
//reverse in iterative way
// node* reverse(node* head){
//     node* prevptr = NULL;
//     node* currptr = head;
//     node* nextptr  ;
//     while(currptr != NULL){
//         nextptr = currptr->next;
//         currptr->next = prevptr;
//         prevptr = currptr;
//         currptr = nextptr;
//     }
//     return prevptr;
// }
/********************************************************************************************/
//reverse in recursive way
node* reverserec(node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    node* temp = reverserec(head->next);
    head->next->next = head;
    head->next = NULL;
    return temp;
}
/********************************************************************************************/
//reverse k node by k node
//if k=2 then reverse first and 2nd node ..then 3rd 4th ..then 5th 6 th 
node* reversek(node* &head, int k){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr  ;
    int count = 0;
    while(currptr != NULL && count < k){
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if(nextptr != NULL){
        head->next = reversek(nextptr,k);
    }
    return prevptr;
}
/********************************************************************************************/
//make cycle in a linked list
void makecycle(node* &head, int pos){
    node* curr = head;
    node* startNode;
    int count =1;
    while(curr->next != NULL){
        if(count==pos){
            startNode = curr;
        }
        curr = curr->next;
        count++;
    }
    curr->next = startNode;
}

/********************************************************************************************/
//Detect cycle is present or not  in a linked list floyd's algorithm / hare and tortoise algorithm
//floyd's algorithm(slow means tortoise and fast means hare)
bool detectcycle(node* head){
    node* slowptr = head;
    node* fastptr = head;
    while(slowptr != NULL && fastptr != NULL && fastptr->next != NULL){
        slowptr = slowptr->next;//slow moves in single step
        fastptr = fastptr->next->next; // fast moves in double step
        if(slowptr == fastptr){
            return true;
        }
    }
    return false;
}
/********************************************************************************************/
//remove cycle in a linked list
node* removecycle(node* head){
    node* slowptr = head;
    node* fastptr = head;
     do{
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
     }while (slowptr != fastptr);

    fastptr = head;
    while(slowptr->next != fastptr->next){
        slowptr = slowptr->next;
        fastptr = fastptr->next;
    }
    slowptr->next = NULL;
    return head;
}
int length(node* head){
    int count = 0;
    node* curr = head;
    while(curr != NULL){
        count++;
        curr = curr->next;
    }
    return count;
}
/********************************************************************************************/
//append last k nodes at head of linked list
node* kappend(node* &head,int k){
    node* newhead;
    node* newtail;
    node* tail=head;// tail node ta ke ,head theke initialize korlam 

    int len = length(head);
    k=k%len;
    int count = 1;
    while(tail->next !=NULL){
        if(count == len-k){
            newtail = tail;//tail(jta head the trverse krcche) er newtail hbe 
        }
        if(count == len-k+1){
            newhead = tail;
        }
        tail=tail->next;
        count++;
    }

    newtail->next = NULL ;
    tail->next = head;
    return newhead;
     

}
//********************************************************************************************/
//intersect two linked list by position
void intersect(node* &head1, node* &head2, int pos){
    node* curr1 = head1;
    
    pos--;
    while(pos--){
            curr1 = curr1->next;
    }
    node* curr2 = head2;
    while(curr2->next != NULL){
            curr2 = curr2->next;
    }     
        curr2->next = curr1;
}

/********************************************************************************************/
//find 1st intersection value of two linked list
int FirstIntersectionValue(node* &head1, node* &head2){
   int l1=length(head1);
    int l2=length(head2);

    int d=0;
    node* ptr1;
    node* ptr2;
    if(l1>l2){
        ptr1=head1;
        ptr2=head2;
        d=l1-l2;
    }
    else{
        ptr1=head2;
        ptr2=head1;
        d=l2-l1;
    }
    while(d){
        ptr1=ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;        
            }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }

    return -1;

  
}

/********************************************************************************************/
node* merge(node* &head1, node* &head2){
    node* p1 = head1;
    node* p2 = head2;
    node* dummyNode = new node(-1);
    node* p3 = dummyNode;
    while(p1 != NULL && p2 != NULL){
        if(p1->data < p2->data){
            p3->next = p1;
            p1 = p1->next;
        }
        else{
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }
    while(p1 != NULL){
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while(p2 != NULL){
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    return dummyNode->next;
}
node* mergerecursive(node* &head1, node* &head2){
    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }
    node* result;
    if(head1->data < head2->data){
        result = head1;
        result->next = mergerecursive(head1->next,head2);
    }
    else{
        result = head2;
        result->next = mergerecursive(head1,head2->next);
    }
    return result;
}
/********************************************************************************************/

int main()
{

    //  node* head = NULL; //empty linked list
/********************************************/
    //insertion at tail
    //  insertattail(head, 1);
    //  insertattail(head, 2);
    //  insertattail(head, 3);
    //  insertattail(head, 4);
    //  insertattail(head, 5);
 /********************************************/   
    //insertion at head
    // insertathead(head, 5);
    // insertathead(head, 0);
/********************************************/
    // printing linked list
    // printlinkedlist(head);
 /********************************************/   
    // cout<<search(head, 200)<<endl;
/********************************************/
    // deletion of node other than head and tail
    // deletion(head, 5);
    //  printlinkedlist(head);
/********************************************/
    // deletion of head
    //  deletionathead(head);
    //  printlinkedlist(head);
/********************************************/
    //reversing of linked list

    //  node* newhead = reverse(head); // iterative way
    //  printlinkedlist(newhead);
/********************************************/
    // node* newhead = reverserec(head);//recursive way
    // printlinkedlist(newhead);
/********************************************/
    // reversing of k nodes
    //  node* knode = reversek(head,2);
    //  printlinkedlist(knode);
/********************************************/
    //cycle
    // makecycle(head,3);
    // printlinkedlist(head);
/********************************************/
    //cycle detection
    // cout<<detectcycle(head)<<endl;
/********************************************/    
    //remove cycle
    // removecycle(head);
    // cout<<detectcycle(head)<<endl;
    // printlinkedlist(head);
/********************************************/
//   node* newhead= kappend(head,3);
//   printlinkedlist(newhead);
/********************************************/
node* head1=NULL;
node* head2=NULL;
insertattail(head1,10);
insertattail(head1,20);
insertattail(head1,30);
insertattail(head1,40);
insertattail(head1,50);
insertattail(head1,60);
insertattail(head2,15);
insertattail(head2,35);
printlinkedlist(head1);
printlinkedlist(head2);
intersect(head1,head2,4);
printlinkedlist(head1);
printlinkedlist(head2);
cout<<FirstIntersectionValue(head1,head2)<<endl;
/********************************************/
// node* newhead=merge(head1,head2);
// node* newhead=mergerecursive(head1,head2);
// printlinkedlist(newhead);
// evenAfterOdd(head);
// printlinkedlist(newhead);


 



    return 0;
}