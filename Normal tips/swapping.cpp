
#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int b=7;
    cout<<"before swapping "<<"a="<<a<<","<<"b="<<b<<endl;

   int temp=a;//temp=5
   a=b;
   b=temp; //temp=7

    cout<<"after swapping "<<"a="<<a<<","<<"b="<<b;

    return 0;
}