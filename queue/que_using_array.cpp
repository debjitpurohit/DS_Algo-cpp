#include<iostream>
using namespace std;
#define n 20

class queue
{
    int front, back;
    int *arr;
public:
    queue(int s)
    {
        front = back = -1;
        arr = new int[n];
    }
    void enqueue(int x){
        if(back == n-1){
            cout<<"Queue overflow"<<endl;
            return;
        }
        back++;
        arr[back] = x;
        if(front == -1){
            front++;
        }
    }
    void dequeue(){
        if(front == -1 || front > back){
            cout<<"No element to dequeue"<<endl;
            return;
        }
        front++;
    }
    int peek(){
        if(front == -1 || front > back){
            cout<<"No element in queue"<<endl;
            return -1;
        }
        return arr[front];
    }
    bool empty(){
        if(front == -1 || front > back){
            return true;
        }
        return false;
    }

};
int main()
{
    queue q(5);
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
    // q.dequeue();
    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
  




    return 0;
}