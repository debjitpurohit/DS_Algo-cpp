//find a number is even or odd using bitwise operator
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if((a & 1)==0){ // if(last bit==0 then even @@ so have to use bit masking of number to find last bit ...... (number &1)==0.....here & is and operator )
        cout<<"EVEN"<<endl;
    }
    else {
        cout<<"ODD"<<endl;
    }

    return 0;
}