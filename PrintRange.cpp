#include<iostream>
using namespace std;
 int PrintRange(int s,int l){
    for(int i=s;i<=l;i++){
     cout<<i<<endl;
    }
 }
 int main(){
   int s,l,c;
   cin>>s>>l;
   PrintRange(s,l);
 }
