#include<iostream>
using namespace std;
int main(){
    cout<<"Enter to check input is alphabet or not ";
    char c;
    cin>>c;
    if(int(c)>=65 && int(c)<=90){
cout<<"Alphabet !";}
else if(int(c)>=97 && int(c)<=122){
    cout<<"Alphabet !"
    ;}
else{
    cout<<"Not an alphabet!"
;}
return 0;
    }
    
