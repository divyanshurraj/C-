#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a;
    cout<<"Enter the time in HH format less than 24 : ";
    cin>>a;
    if(a<=12){
        cout<<"Good Morning";}
    else if(a<=15){
        cout<<"Good Afternoon";}
    else if(a<=18){
        cout<<"Good Evening";}
    else if(a<=24){
        cout<<"Good Night";
    }
    return 0;
}
