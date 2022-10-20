#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_back(1); //1
    dq.push_back(2); // 1 2
    dq.push_front(3); // 3 1 2
    dq.push_front(4); // 4 3 1 2
    for(auto i:dq)
    {
        cout<<i<<" "<<endl;
    }
    dq.pop_back(); // 4 3 1
    dq.pop_front(); // 3 1
     for(auto i:dq)
    {
        cout<<i<<" "<<endl;
    }




    return 0;
}