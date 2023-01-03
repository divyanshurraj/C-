#include<iostream>
using namespace std;
int main(){
   struct{
    string month;
    int days;
   }s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12;
s1.month="January";
s1.days=31;
s2.month="Februry";
s2.days=28;

    s3.month="March";
    s3.days=31;


    s4.month="April";
    s4.days=30;


    s5.month="May";
    s5.days=31;


    s6.month="June";
    s6.days=30;


    s7.month="July";
    s7.days=31;


    s8.month="August";
    s8.days=31;


    s9.month="September";
    s9.days=30;


    s10.month="October";
    s10.days=31;


    s11.month="November";
    s11.days=30;


    s12.month="December";
    s12.days=31;
cout<<s1.month<<" "<<s1.days<<endl;
cout<<s2.month<<" "<<s2.days<<endl;
cout<<s3.month<<" "<<s3.days<<endl;
cout<<s4.month<<" "<<s4.days<<endl;
cout<<s5.month<<" "<<s5.days<<endl;
cout<<s6.month<<" "<<s6.days<<endl;
cout<<s7.month<<" "<<s7.days<<endl;
cout<<s8.month<<" "<<s8.days<<endl;
cout<<s9.month<<" "<<s9.days<<endl;
cout<<s10.month<<" "<<s10.days<<endl;
cout<<s11.month<<" "<<s11.days<<endl;
cout<<s12.month<<" "<<s12.days<<endl;
return 0;
}
