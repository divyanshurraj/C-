#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,sum;
    cout<<"Enter the numerator of first fraction then denominator. ";
    cin>>a>>b;
    cout<<"Enter the numerator of first fraction then denominator. ";
    cin>>c>>d;
    sum=((a*d)+(b*c))/(b*d);
    cout<<"Sum : "<<sum;
    return 0;
}
