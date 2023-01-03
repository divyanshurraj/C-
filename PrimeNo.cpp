#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,count=0;
    cout<<"Enter a number. ";
    cin>>num1;
    for(int i=1;i<=num1;i++){
        if(num1%i==0){
            count++;
        }

    }
    if(count<=2){
        cout<<"Prime number.";
    }
    else{
        cout<<"Not prime number ";
    }

}
