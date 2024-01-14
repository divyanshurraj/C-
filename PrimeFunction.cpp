#include<iostream>
using namespace std;
void CheckPrime(int n){
    int flag=0;
  for(int i = 1;i<=n;i++){
    if(n%i==0){
        flag+=1;
    }
  }

        if(flag > 2){
            cout<<n<<" is not Prime";
        }
        else{
            cout<<n<<" is Prime";
        }
        }
    
  

int main(){
   int n;
   cin>>n;
   CheckPrime(n);
}
