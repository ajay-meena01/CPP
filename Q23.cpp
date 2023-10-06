// C++ Program to Find the Number of Digits in a number

#include<iostream>
using namespace std;
int main()
{
    int dights, n, number = 0;
    cout<<"enter a number: "<<endl;
    cin>>n;
    dights = n;
    while(dights>0)
    {
        dights = dights/10;
        cout<<dights<<endl;
        number++;

    }
   cout<<number;
    return 0 ;
}