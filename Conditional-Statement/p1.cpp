//Write a C program to accept two integers and check whether they are equal or not.
#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Input the value for Number1 & Number2: ";
    cin>>num1 >> num2;
    if(num1 == num2){
        cout<<"Number1 & Number2 are equal ";
    }
    else{
        cout<<"Number1 & Number2 are not equal ";
    }
}