#include<iostream>
using namespace std;
 void Search(int arr[],int k,int size){
  int flag=0;
    for(int i=0;i<size;i++){
      if(arr[i]==k){
        cout<<"Element present at index : "<<i;
        flag+=1;
      }
    }

    if(flag==0){
      cout<<"Element is not present";
    }
 }
int main(){
   int n,k;
   cout<<"Enter array size : ";
   cin>>n;
   int arr[n];
   cout<<"Enter the elements : ";
   for(int j=0;j<n;j++){
    cin>>arr[j];
   }

   cout<<"Enter the element to search : ";
   cin>>k;
   int size = sizeof(arr)/sizeof(arr[0]);
   Search(arr,k,size);
    
}
