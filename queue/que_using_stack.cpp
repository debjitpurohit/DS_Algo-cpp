#include<bits/stdc++.h>
using namespace std;

class que{
    stack<int> s1;
    stack<int> s2;
    public:
    void enqueue(int x){
        s1.push(x);
    }
    int dequeue(){
        if(s1.empty() && s2.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval = s2.top();
        s2.pop();
        return topval;
    }
    bool empty(){
        if(s1.empty() && s2.empty()){
            return true;
        }
        return false;
    }
    int peek(){
        if(s1.empty() && s2.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval = s2.top();
        return topval;
    }
};
int main()
{
    que q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<q.peek()<<endl;
    cout<<q.dequeue()<<endl;
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