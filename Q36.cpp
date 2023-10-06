// Write a program which takes 2 digits, X,Y as input and generates a 2-dimensional array. The element value in the i-th row and j-th column of the array should be i*j.
// Note: i=0,1.., X-1; j=0,1,¡­Y-1.

#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the vale of x and y: "<<endl;
    cin>>x>>y;
    int a[x][y];
    for (int i = 0; i < x; i++)
    {
        /* code */
        for (int j = 0; j <y; j++)
        {
            /* code */
            cout<<i*j;
        }
        
    }

    
    return 0 ;
}