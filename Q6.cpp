// Write a C++ program to find the minimum of two numbers.
#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;

    int min = (num1 < num2)? num1 : num2;
    cout<<"manimum: "<<min;
    return 0 ;
}