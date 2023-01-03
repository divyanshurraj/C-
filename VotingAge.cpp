#include<iostream>
#include<string>
using namespace std;
int main(){
  int voting_age=18,input;
  cout<<"Enter your age : ";
  cin>>input;
  if(voting_age<=input){
    cout<<"You are eligible to vote";
  }
  else{
    cout<<"You are not eligibe to vote"<<endl;
    }
  return 0;
}
