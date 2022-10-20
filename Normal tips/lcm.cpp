//lowest common multiplier.....লঘিষ্ঠ সাধারণ গুণিতক
#include<bits/stdc++.h>
// #include <algorithm>// int gcd(int a,int b){
//     if(a==0){
//         return b;
//     }
//     return gcd(b%a,a);
// }
// int lcm(int a, int b)  
// {       
//     return (a*b) / gcd(a,b);  
// } 
using namespace std;

int main() {	
	 long int a,b;//jehetu lcm er value onek boro tai long int
	    cin>>a>>b;
	    cout<<(a*b)/__gcd(a,b)<<endl; // (120*140) / 20
	    
	
	
	return 0;
}
