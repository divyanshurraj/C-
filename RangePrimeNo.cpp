#include<bits/stdc++.h>
using namespace std;
int Prime(int num){
    if(num<2){
        return 0;
    }
    else
    {
        int x= num/2;
        for(int i=2;i<=x;i++){
            if(num%i==0){
                return 0;
            }
        }
    }
    return 1;
}
int main(){
    int n1,n2;
    cout<<"Enter the lower and upper values: ";
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++){
        if(Prime(i))
        cout<<i<<" ";
    }
    return 0 ;
}
