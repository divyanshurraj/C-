#include<iostream>
using namespace std;
int main(){
    int i,n;
    long fact=1;
    cout<<"Enter the the number. ";
    cin>>n;
   if(n<=0){
    cout<<"Invalid input";
   }
   else{
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
   }
    cout<<"The factorial of the number is "<<fact;
    return 0;
}
