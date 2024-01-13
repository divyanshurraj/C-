#include<iostream>
using namespace std;

int fact(int n){
    int ans = 1;
   for(int i=1;(i<=n) && (n>0);i++){
     ans = ans*i;
   }
   return ans;
}
int main(){
  int n,c;
  cin>>n;
  c = fact(n);
  cout<<c;
}
