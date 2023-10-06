// Write a program that calculates and prints the value according to the given formula:
// Q = Square root of [(2 * C * D)/H]
// Following are the fixed values of C and H:
// C is 50. H is 30.
// D is the variable whose values should be input to your program in a comma-separated sequence.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int C,D,H;
    C = 50;
    H = 30;
    cout<<"Enter a value of: "<<endl;
    // for (int i = 0; i <D; i++)
    // {
    //     /* code */
    // }
    
    cin>>D;

    int Q = sqrt(2 * C * D)/H;

    cout<<Q;

    return 0;


}