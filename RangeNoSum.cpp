#include<iostream>
using namespace std;
int main(){
    int first,last,sum=0;
    cout<<"Enter the first number : ";
    cin>>first;
    cout<<"Enter the last number : ";
    cin>>last;
    for(int i=first;i<=last;i++){
        sum=sum+i;
    }
    cout<<"The sum of the number is : "<<sum;
    return 0;
}
