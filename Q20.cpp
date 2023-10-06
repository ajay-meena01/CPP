// Write a C++ program to find the sum of natural numbers up to a given positive integer.

// Explanation: This program uses a loop to calculate the sum of natural numbers from 1 to the given input.

#include<iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout<<"Enter a number: "<<endl;
    cin>> n;
    for (int i = 0; i <= n; ++i)
    {
        /* code */
        sum += i;
    }
    cout<<sum;
    return 0 ;
}