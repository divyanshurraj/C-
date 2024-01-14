#include<iostream>
using namespace std;

int main(){
    int k;
    cout<<"Enter the size of array : ";
    cin>>k;
  int n[k];
  cout<<"Enter the elements to insert : ";
  for(int j = 0;j<k;j++){
    cin>>n[j];
  }

   cout<<"Reverse array : ";
   for(int i=k-1;i>=0;i--){
    cout<<n[i]<<" ";
   }
   return 0 ;
}
