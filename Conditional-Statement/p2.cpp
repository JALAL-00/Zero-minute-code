//Write a C program to check whether a given number is even or odd.
/*
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter an integer: ";
    cin>>num;
    if(num%2==0){
        cout<<"The number is even";
    }
    else{
        cout<<"The number is odd";
    }
}
*/

#include<iostream>
using namespace std;
int main(){
    int num1, rem1;
    cout<<"Enter an integer: ";
    cin>>num1;
    rem1 = num1%2;
    if(rem1 == 0){
        cout<<endl;
          cout<<"The number is even";
    }
    else{
        cout<<endl;
        cout<<"The number is odd";
    }
}
