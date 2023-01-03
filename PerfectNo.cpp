#include<iostream>
using namespace std;
int main(){
    int i,sum=0,num;
    cout<<"Enter the number: ";
    cin>>num;
    for(i=1;i<num;i++){
        if(num%i==0){
            sum=sum+i;
        }

    }
    if(num==sum){
        cout<<"Perfect number.";
    }
    else{
        cout<<"Not Perfect number";
    }
    return 0;
}
