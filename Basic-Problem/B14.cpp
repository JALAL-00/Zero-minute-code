// Write a program in C++ to calculate the volume of a sphere
// Formula V = 4/3 pie r^3
#include<iostream>
using namespace std;
int main(){
    int rad;
    float volsp;
    cout<<"Input the radius of a sphere: ";
    cin>>rad;
    volsp = (4*3.1416*rad*rad*rad)/3;
    cout<<"The volume of sphere is : "<< volsp <<endl;
    return 0;
}