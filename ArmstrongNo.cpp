#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,copy,rem,result=0,n=0;
    cout<<"Enter a number: ";
    cin>>num;
    copy=num;
    while(num!=0)
    {
        num/=10;
        n++;
    }
    num=copy;
    while(num!=0)
    {
        rem=num%10;
        result+=pow(rem,n);
        num/=10;
    }
    if(result==copy)
    cout<<"Armstrong number";
    else
    cout<<"Not an Armonstrong number";

    return 0;
}
