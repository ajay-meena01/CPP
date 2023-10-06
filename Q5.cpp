// Write a C++ program to find the maximum of two numbers.

#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;

    int max = (num1> num2)? num1 : num2;
    cout<<"maximum: "<<max;
    return 0 ;
}