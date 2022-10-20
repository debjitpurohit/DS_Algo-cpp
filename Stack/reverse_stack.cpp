#include<bits/stdc++.h>
using namespace std;

void insertatbottom(stack<int> &st, int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }
    int topele = st.top();
    st.pop();
    insertatbottom(st,ele);
    st.push(topele);
}

void reversestack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int top = st.top();
    st.pop();
    reversestack(st);
    insertatbottom(st,top);
}
int main()
{
    stack<int> st; //5 4 3 2 1
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5); 
    
    cout<<"After reversing"<<endl;
    reversestack(st); //1 2 3 4 5
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }cout<<endl;


    return 0;
}