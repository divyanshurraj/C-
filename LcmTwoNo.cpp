#include<iostream>
using namespace std;
int main(){
    int num1,num2,lcm;
    cout<<"Enter num1 : ";
    cin>>num1;
    cout<<"Enter num2 : ";
    cin>>num2;
    int max=(num1>num2)?num1:num2;
    for (int i=max;i<=num1*num2;i++){
        if(i%num1==0 && i%num2==0){
            lcm=i;
            break;
        }
    }
    cout<<lcm;
        return 0;
}
