// Write a C++ program to convert Celsius to Fahrenheit.

#include<iostream>
using namespace std;
int main()
{
    int celsius;
    cout<<"Enter temperature in celsius: "<<endl;
    cin>>celsius;
    int fehrenheit = celsius *9/5+32;
    cout<<fehrenheit;
    return 0 ;
}