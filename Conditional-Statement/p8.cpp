// Write a C program to find the largest of three numbers.
/*
#include<iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    cout<<"Enter the value of three number: ";
    cin>>num1>>num2>>num3;

    if(num1 > num2){
        if(num1 > num3){
            cout<<" The 1st Number is the greatest among three. ";
        }
    else{
        cout<<" The 3rd Number is the greatest among three. ";
    }
    }

    else if(num2 > num3){
        cout<<" The 2nd Number is the greatest among three. ";
    }
    else{
        cout<<" The 3rd Number is the greatest among three. ";
    }
    return 0;
}
*/

#include<iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    cout<<" Enter the value of three numbers: ";
    cin>>num1>>num2>>num3;
    if((num1 > num2) && (num2 > num3)){
        cout<<" The 1st Number is the greatest among three. ";
    }
    else if((num2 > num3) && (num2 > num1)){
        cout<<" The 2nd Number is the greatest among three. ";
    }
    else if((num3 > num1) && (num3 > num2)){
        cout<<" The 3rd Number is the greatest among three. ";
    }
    return 0;
}

