// Write a C++ program to print a half pyramid pattern using stars.

#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"Enter the numbers of rows: "<<endl;
    cin>>rows;
    for (int i = 0; i <= rows; i++)
    {
        /* code */
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0 ;
}