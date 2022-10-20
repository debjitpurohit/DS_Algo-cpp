#include<bits/stdc++.h>
using namespace std;

//recursive function for permutation and

// void permute(string s , string answer=" "){
//     if(s.length() == 0)
//     {
//         cout<<answer<<"  ";
//         return;
//     }
//     for(int i=0 ; i<s.length() ; i++)
//     {
//         char ch = s[i];
//         string left_substr = s.substr(0,i);
//         string right_substr = s.substr(i+1);
//         string rest = left_substr + right_substr;
//         permute(rest , answer+ch);
//     }
  
// }
// void backtrack(string s, int idx, int N) {
//     if (idx == N)
//       cout << s << endl;
//     else {
//       for (int i = idx; i <= N; i++) {
//         swap(s[idx], a[i]);
//         permute(s, idx + 1, N);
//         swap(s[idx], a[i]);
//       }
//     }
// }
int main()
{    
    string s="1 2 3 4";
    // by c++stl
    sort(s.begin(),s.end()); // if s is not sorted firstly we have to sort s 
    do{
        cout<<s<<" ";
    }
    while(next_permutation(s.begin(),s.end()));
    
    
    //  int N = s.length();
    //   backtrack(s, 0, N - 1);

    return 0;
}