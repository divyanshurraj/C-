#include<iostream>
using namespace std;
int main(){ 
    int rev=0,rem,num;
    cout<<"Enter the number : ";
    cin>>num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    cout<<rev;
    return 0;
}
