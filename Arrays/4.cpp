#include<iostream>
using namespace std;

int linearsearch(int array[],int n,int key){
    for(int i=0;i<n;i++){
    if(array[i]==key){
        return i;
    }}
   return -1;
    
}
int main()
{
  int n=5;
  int key=6; // have to find 6
   int array[5]={1,23,4,6,7};
   
   cout<<linearsearch(array,n,key);

    return 0;
}