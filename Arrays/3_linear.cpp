#include<iostream>
using namespace std;

int linearsearch(int array[], int n, int key){
    for(int i=0;i<n;i++){
    if(array[i]==key){
        return i;
    }}
   return -1;
    
}
int main()
{
  int n;
  cin>>n;
  int key;
  cin>>key;
   int array[n];
   for(int i=0; i<n;i++){
      cin>>array[i];
   }
   cout<<linearsearch(array,n,key);

    return 0;
}