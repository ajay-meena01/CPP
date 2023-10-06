// Write a C++ program to swap two numbers without using a temporary variable.

#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;
    num1 = num1+num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout<<num1<<endl;
    cout<<num2;
    return 0 ;
}