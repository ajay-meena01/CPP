// Write a C++ program to check if a number is even or odd.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a positve integer: "<<endl;

    cin>>num;
    if (num%2 == 0)
    {
        /* code */
        cout<<num<<" is even number";
    }else
    {
        /* code */
        cout<<num<<" is odd number";
    }    
    return 0 ;
}