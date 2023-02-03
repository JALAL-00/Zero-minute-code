// Write a C++ program to accept the height of a person in centimeter and categorize the person according to their height.
#include<iostream>
using namespace std;
int main(){
    int height;
    cout<<"Input the height of the person (In centimetres): ";
    cin>>height;
    if(height < 150.0){
        cout<<" The person is Dwarf ";
    }
    else if((height >= 150.0) && (height < 165.0)){
        cout<<" The person is Average heighted ";
    }
    else if((height >= 165.0) && (height < 195.0)){
        cout<<" The person is Taller heighted ";
    }
    else{
        cout<<" The person is Abnormal heighted ";
    }
}