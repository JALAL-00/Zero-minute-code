//Write a program in C++ to display n terms of natural number and their sum.
#include<iostream>
using namespace std;
int main(){
    int i, n, sum =0;
    cout<<"Input a number of item: ";
    cin>>n;
    for(int i =0; i<= n; i++){
        cout<< i <<" ";
        sum = sum+i;
    }
    cout<<"The sum of the Natural no is: "<< sum;
    return 0;
}