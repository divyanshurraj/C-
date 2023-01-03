#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter x-axis. ";
    cin>>x;
    cout<<"Enter y-axis. ";
    cin>>y;
    if(x>0 && y>0){
        cout<<"Coordinates are in 1st Quadrant. ";
    }
    else if(x<0 && y>0){
        cout<<"Coordinates are in 2nd Quadrant. ";
    }
    else if(x<0 && y<0){
        cout<<"Coordinates are in 3rd Quadrant. ";
    }
    else if(x>0 && y<0){
        cout<<"Coordinates are in 4th Quadrant. ";
    }
    else if (x==0 && y==0){
        cout<<"Coordinates are on origin. ";
    }
    else if(x==0 && y>0 || y<0){
        cout<<"Coordinates are on y-axis.";
    }
    else if(y==0 && x>0 || x<0){
        cout<<"Coordinates are on x-axis.";
    }
    else{
        cout<<"Enter correct value.";
    }
    return 0;
}
