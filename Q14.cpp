// Write a C++ program to reverse a given integer.

#include<iostream>
using namespace std;
int main(){
    int n, Reverseed_number = 0, sum;
    cout<<"Enter a positive nuber: "<<endl;
    cin>>n;

    while (n != 0)
    {
        /* code */
        sum = n%10;
        Reverseed_number = Reverseed_number*10 + sum;
        n/=10;
    }
    cout<<Reverseed_number;
    return 0 ;
}