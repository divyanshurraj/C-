#include<iostream>
using namespace std;
int main(){
    int num,handshake;
    cout<<"Enter the number of person. ";
    cin>>num;
 handshake=num*((num-1)/2);
 cout<<"The maximum number of handshakes is : "<<handshake;
 return 0;
}
