//push costly
#include<bits/stdc++.h>
using namespace std;

class Stack{
    int N;
    queue<int> q1;
    queue<int> q2;
    public:
    Stack(){
        N=0;
    }
    void push(int x){
        q2.push(x);
        N++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    void pop(){
        if(q1.empty()){
            return;
        }
        q1.pop();
        N--;
    }
    int top(){
        if(q1.empty()){
            return -1;
        }
        return q1.front();
    }
    int size(){
        return N;
    }
   
};
int main()
{
    Stack st;
     st.push(1);
        st.push(2);
        st.push(3);
        st.push(4);
        
        cout<<st.top()<<endl;
        st.pop();
        cout<<st.top()<<endl;
        st.pop();
        cout<<st.top()<<endl;
        st.pop();
        cout<<st.top()<<endl;
        st.pop();
        // cout<<st.size()<<endl;
        if(st.size()==0){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"Stack is not empty"<<endl;
        }
    return 0;
}