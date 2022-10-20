//for swapping have to use XOR operator
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=5;
    int b=7;
    cout<<"before swapping "<<"a="<<a<<","<<"b="<<b<<endl;

    //XOR 
    a=a^b;//a=2
    b=a^b;//b=5
    a=a^b; //a=7

    cout<<"after swapping "<<"a="<<a<<","<<"b="<<b;

    return 0;
}