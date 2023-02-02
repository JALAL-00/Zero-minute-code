// Write a program in C++ to calculate the volume of a cube.
// Formula V = a^S3
#include<iostream>
using namespace std;
int main(){
    int sid;
    float volcu;
    cout<<"Enter the side of a cube: ";
    cin>>sid;
    volcu = (sid*sid*sid);
    cout<<"The volume of cube is: "<<volcu<<endl;
    return 0;
}