//easy bcz stack is lifo
#include<bits/stdc++.h>
using namespace std;
void reversentence(string s){
    stack<string> st;
    for(int i=0;i<s.length();i++){
        string word = "";
        while(s[i]!=' ' && i<s.length()){
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main()
{
    string s="I LOVE YOU";
    reversentence(s);


    return 0;
}