/*Write a C++ program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.*/

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the value of integer m: ";
    cin>>m;
    if(m>0){
        cout<<" n is 1 ";
    }
    else if(m==0){
        cout<<" n is 0 ";
    }
    else if(m<0){
        cout<<" n is -1 ";
    }
    return 0;
}