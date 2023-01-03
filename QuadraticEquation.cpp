#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c,root1,root2,d1,d2;
    cout<<"Enter the value of a ";
    cin>>a;
    cout<<"Enter the value of b ";
    cin>>b;
    cout<<"Enter the value of c ";
    cin>>c;
    d1=(b*b)-(4*a*c);
    d2=pow(d1,0.5);
    root1=(-b+d2)/(2*a);
    root2=(-b-d2)/(2*a);
    cout<<"Roots of the quadratic equation1 are : "<<root1<<" "<<root2;
    return 0;
}
