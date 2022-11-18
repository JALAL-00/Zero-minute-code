// Write a program in C++ to find the Area and Perimeter of a Rectangle
//area=(lngth*width);
//peri=2*(lngth+width);
#include<iostream>
using namespace std;
int main(){
    int width, length, area, Perimeter;
    cout<<"Enter the lenth of the Ractenagle : ";
    cin>>length;
    cout<<"Enter the width of the Ractengla : ";
    cin>>width;
    area = (length*width);
    Perimeter = 2*(length + width);
    cout<<"The area of the reactangle is : "<< area <<endl;
    cout<< "The perimeter of the ractangle is : "<< Perimeter;

    return 0;
}