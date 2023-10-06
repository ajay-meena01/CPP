#include<iostream>
using namespace std;
int main()
{
    int a[10] = {2,3,4,5,1,5,3,7,5,4};
    int b[10];


    int j = 0;
    for (int i = 9; i >= 0; i--)
    {
        /* code */
       b[j] = a[i];
       j = j + 1;

    }
    for (int j = 0; j < 10; j++)
    {
        /* code */
        cout<<b[j]<<" ";
    }
    
    

    return 0 ;
}