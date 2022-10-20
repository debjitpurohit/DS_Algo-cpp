//additional function for counting bits
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll x= 5328; //64bits
    int m=5328; //32 bits

//the number of 0 at the begining of the bits representation
    cout<<__builtin_clzll(x)<<" "; // long long thts why 64 bits so 64-13=51
    cout<<__builtin_clz(m)<<endl; // int thats why 32-13=19

//the number of 0 at the end of the bits representation 
    cout<<__builtin_ctzll(x)<<" ";
    cout<<__builtin_ctz(m)<<endl;


//the numbers of 1 in bit
    cout<<__builtin_popcountll(x)<<" ";
    cout<<__builtin_popcount(m)<<endl;


// numbers of consecutive pair of 1
    cout<<__builtin_parityll(x)<<" ";
    cout<<__builtin_parity(m)<<endl;

    return 0;
}