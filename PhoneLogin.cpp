#include<iostream>
using namespace std;
int main(){
    int c;
    int a=2356;
    cout<<"Enter the pin! ";
    cin>>c;
    if(c==a){
        cout<<"Sucessful login !";
    }
    else{
        cout<<"Invalid Password";
    }
    return 0;
}
