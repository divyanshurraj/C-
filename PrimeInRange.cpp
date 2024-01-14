#include<iostream>
using namespace std;
void CheckPrime(int j){
      int flag=0;
      for(int i = 1;i<=j;i++){
        if(j%i==0){
        flag+=1;
             }
          }

        if(flag > 2){
            cout<<j<<" is not Prime"<<endl;
        }
        else{
            cout<<j<<" is Prime"<<endl;
        }
      
        } 


int main(){
   int n;
   cin>>n;
   for(int j=1;j<=n;j++){
   CheckPrime(j);
   }
}
