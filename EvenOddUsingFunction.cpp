#include<iostream>
using namespace std;
void Calculate(int n){
    if(n<0){
    cout<<"Negative Number ,";
    exit;
    }
    if(n%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    
}
int main(){
    int n;
    cin>>n;
    Calculate(n);
}
