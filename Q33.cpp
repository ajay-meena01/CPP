// With a given integral number n, write a program to generate a dictionary that contains (i, i*i) such that is an integral number between 1 and n (both included). and then the program should print the dictionary.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        cout<<i<<": "<<i*i<<",";
    }
    return 0;
    
}