#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number to check whether positive or not. ";
    cin>>num;
    if(num<0){
        cout<<"The number is negative.";
    }
    else if(num==0){
    cout<<"The number is neither negative nor positive .";
    }
    else{
        cout<<"The number is positive.";
    }
    return 0;
}
