#include<bits/stdc++.h> // prime means can only devesible by 1 and itself
using namespace std;
bool isprime(int m){
    for(int i=2;i<=sqrt(m);i++){
        if(m%i==0){
            return false;  
        } 
    }     
    return true;

}
int main()
{
  int a,b;
  cin>>a>>b;
  for(int i=a;i<=b;i++){
     if(isprime(i)){
         cout<<i<<endl;
     }
  }
    return 0;
}