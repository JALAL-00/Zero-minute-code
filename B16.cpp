// Write a program in C++ to calculate the volume of a cylinder.
//V=πr^2h
#include<iostream>
using namespace std;
int main(){
    int rad, hgt;
    float volcy;
    cout<<"Enter the radious of the cylinder: ";
    cin>>rad;
    cout<<"Enter the height of the cylinder: ";
    cin>>hgt;
    volcy = (3.1416 * rad*rad*hgt);
    cout<<"The volume of a cylinder is : "<<volcy<<endl;
    return 0;
}
