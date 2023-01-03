#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num1,num2,square=1;
    cout<<"Enter base. ";
    cin>>num1;
    cout<<"Enter power: ";
    cin>>num2;
    for(int i=1;i<=num2;i++){
        square=num1*square;
    }
    cout<<square;


    return 0;
}
