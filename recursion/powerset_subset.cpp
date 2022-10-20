#include<bits/stdc++.h>
using namespace std;

void powerSet(string str, int i = 0,string curr=" ")
{
    // base case
    if (i == str.length()) {
        cout << curr << endl;
        return;
    }
    powerSet(str, i + 1, curr + str[i]);
    powerSet(str, i + 1, curr);
}
 
// Driver code
int main()
{
    string str = "12345";
    powerSet(str);
    return 0;
}