// Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote.
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age of the candidate: ";
    cin>>age;
    if(age < 18){
        cout<<"Sorry, you are not aligile to cast your vote: "<<endl;
        cout<<"You would be able to caste your vote after "<<18-age<<" years ";
    }
    else{
        cout<<"Congratulation! You are eligible for casting your vote";
    }
}