#include<bits/stdc++.h>
using namespace std;

int rain_water(vector<int>a)
{
    stack<int> s;   
    int n=a.size(),ans=0;
    for(int i=0;i<n;i++)
    {
        while(!s.empty() && a[s.top()]<a[i])
        {
            int top=s.top();
            s.pop();
            if(s.empty())
            {
                break;
            }
            int distance=i-s.top()-1; //1
            int height=min(a[i],a[s.top()])  - a[top]; //2-1
            ans+=distance*height;
        }
        s.push(i);
    }
    return ans;
}

int main()
{
    vector<int> a = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<rain_water(a);
 
    return 0;
}