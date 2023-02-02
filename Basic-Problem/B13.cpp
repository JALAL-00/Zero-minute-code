// Write a program in C++ to swap two numbers.
#include<iostream>
using namespace std;
int main(){
    int num1, num2, temp;
    cout<<"Enter 1st number: ";
    cin>>num1;
    cout<<"Enter 2nd number: ";
    cin>>num2;
    temp = num2;
    num2 = num1;
    num1 = temp;
    cout<<"After swaping the 1st number is: "<<num1<<endl;
    cout<<"After swaping the 2nd number is: "<<num2<<endl;

    return 0;
}