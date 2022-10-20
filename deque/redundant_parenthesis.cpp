//Input: str = “((a+b))”
//Output: YES
//Explanation: ((a+b)) can reduced to (a+b), this Redundant

//Input: str = “(a+(b)/c)”
//Output: YES
//Explanation: (a+(b)/c) can reduced to (a+b/c) because b is surrounded by () which is redundant.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> st;
    // bool ans = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            st.push(s[i]);
        }
        else if(s[i]=='(')
        {
            st.push(s[i]);
        }

        else if (s[i] == ')')
        {
            if (st.top() == '(')
            {
               cout<<"redundant";
                return 0;

            }
            while (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
                {
                    st.pop();
                }
                st.pop();
            
        }      
    }
    cout<<"not redundant";
    return 0;
}