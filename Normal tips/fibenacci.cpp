// next term is sum of previous two terms 0,1,1,2,3,5.... called as fibonacci series
// print first n number of fabonacci series
#include<bits/stdc++.h>
using namespace std;
void fibonacci(int n)
{
    int t1=0,t2=1,nextterm;
    for(int i=0;i<n;i++)
    {
         cout<<t1<<" ";
       nextterm =t1+t2;
        t1=t2; //now t2 become t1
        t2=nextterm; // mow nextterm become t2
       
    }
    return;
}
int main()
{
    int a;
    cin>>a;
    
   fibonacci(a);
    return 0;
}