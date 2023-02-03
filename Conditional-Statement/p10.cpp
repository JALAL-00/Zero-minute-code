// Write a C program to find the eligibility of admission for a professional course based on the following criteria: 
/*
Marks in Maths >=65
Marks in Phy >=55
Marks in Chem>=50
Total in all three subject >=190
or
Total in Math and Physics >=140
*/
#include<iostream>
using namespace std;
int main(){
    int m, p, c, t, mp;
    cout<<" Marks in Maths >=65 "<<endl;
    cout<<" Marks in Phy >=55 "<<endl;
    cout<<" Marks in Chem>=50 "<<endl;
    cout<<" Total in all three subject >=190 "<<endl;
    cout<<" Total in Math and Physics >=140 "<<endl;
    cout<<endl;
    cout << " Enter marks in Maths: ";
    cin >> m;
    cout << " Enter marks in Physics: ";
    cin >> p;
    cout << " Enter marks in Chemistry: ";
    cin >> c;
    cout<<endl;
    cout<<" Total in all three subject "<< m + p + c <<endl;
    cout<<" Total in Math and Physics "<< m + p <<endl;
  
    t = m + p + c;
    if(m >= 65 && p >= 55 && c >= 50 && t >= 190){
        cout<<endl;
        cout << "Eligible for admission." << endl;
    }
    else if(mp >= 140){
        cout<<endl;
        cout<<"Eligible for admission."<<endl;
    }
    else{
        cout<<endl;
        cout << " Not Eligible for admission." << endl;
    }
  return 0;
}