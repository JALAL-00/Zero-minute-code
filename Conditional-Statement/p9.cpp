// Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.
#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<" Enter the value of X coordinate : ";
    cin>> num1;
    cout<<" Enter the value of Y coordinate : ";
    cin>> num2;
    if( (num1 > 0) && (num2 > 0)){
        cout<<" The coordinate point" <<" ["<< num1 <<","<< num2 <<"] "<< " lies in the First quandrant. ";
    }
    else if((num1 < 0) && (num2 > 0)){
        cout<<" The coordinate point" <<" ["<< num1 <<","<< num2 <<"] "<< "lies in the Second quandrant. ";
    }
    else if((num1 < 0) && (num2 < 0)){
        cout<<" The coordinate point" <<" ["<< num1 <<","<< num2 <<"] "<< "lies in the Third quandrant. ";
    }
    else if((num1 > 0) && (num2 <0)){
        cout<<" The coordinate point" <<" ["<< num1 <<","<< num2 <<"] "<< "lies in the Fourth quandrant. ";
    }
    else if((num1 == 0) && (num2==0)){
        cout<<" The coordinate point" <<" ["<< num1 <<","<< num2 <<"] "<< "lies in the Origin quandrant. ";
    }
    return 0;
}