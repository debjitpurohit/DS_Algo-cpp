#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
   int array[n];
   for(int i=0; i<n;i++){
      cin>>array[i];
   }
   //selection sort algo{
   for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(array[i]>array[j]){
            int temp=array[j];
            array[j]=array[i];
            array[i]=temp;
        }
    }
   }
//   }
    for(int i=0; i<n;i++){
      cout<<array[i]<<" ";
   }

    return 0;
}