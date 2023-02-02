//Write a program in C++ to display various type or arithmetic operation using mixed data type
#include<iostream>
using namespace std;
int main(){
    int a=5, b=7;
    double m= 3.7, n=8.0;
    cout<<" "<<a<<" + "<<" "<<b<< " = "<< a+b <<endl;
    cout<<" "<<m<<" + "<<" "<<n<<" = "<< m+n <<endl;
    cout<<" "<<a<<" + "<<" "<<n<<" = "<< a+n <<endl;
    cout<<" "<<a<<" - "<<" "<<b<<" = "<< a-b <<endl;
    cout<<" "<<m<<" - "<<" "<<n<<" = "<< m-n <<endl;
    cout<<" "<<a<<" - "<<" "<<n<<" = "<< a-n <<endl;
    cout<<" "<<a<<" * "<<" "<<b<<" = "<< a*b <<endl;
    cout<<" "<<m<<" * "<<" "<<n<<" = "<< m*n <<endl;
    cout<<" "<<a<<" * "<<" "<<n<<" = "<< a*n <<endl;
    cout<<" "<<a<<" / "<<" "<<b<<" = "<< a/b <<endl;
    cout<<" "<<m<<" / "<<" "<<n<<" = "<< m/n <<endl;
    cout<<" "<<a<<" / "<<" "<<n<<" = "<< a/n <<endl;

    return 0;
}