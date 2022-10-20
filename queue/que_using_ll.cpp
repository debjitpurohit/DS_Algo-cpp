#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class Queue{
    Node* front;
    Node* back;

public:
    Queue(){
        front = NULL;
        back = NULL;
    }

    void enqueue(int x){
        Node* n = new Node(x);
        // if queue is empty
        if(front == NULL){
            back = n;
            front = n;
            return;
        }
        back->next = n;
        back = n;
    }

    void dequeue(){
        if(front == NULL){
            cout<<"Queue is empty"<<endl;
            return;
        }
        Node* todelete = front;
        front = front->next;
        delete todelete;
    }

    int peek(){
        if(front == NULL){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return front->data;
    }

    bool empty(){
        if(front == NULL){
            return true;
        }
        return false;
    }
}; 
int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
      if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
  



    return 0;
}