#include<bits/stdc++.h>
using namespace std;
class que{
    stack<int>s1;
    public:
    void enqueue(int x){
        s1.push(x);
    }
    int dequeue(){
        if(s1.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int x = s1.top();
        s1.pop();
        if(s1.empty()){
            return x;
        }
        int item = dequeue();
        s1.push(x);
        return item;
    }
};
int main()
{
    que q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;

    return 0;
}