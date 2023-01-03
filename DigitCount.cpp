#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter the number ";
    cin>>n;
    if(n==0){
        cout<<"The digit is 1. ";
    }
    else 
    {
        while(n!=0){
        n=n/10;
        ++count;
       
    }
    }
     cout<<"The digit is "<<count;
    return 0;
}
