// Write a C++ program to find the factorial of a positive integer.

#include<iostream>
using namespace std;
int main(){
    int n, factorial = 1;
    cout<<"Enter a positive number: "<<endl;
    cin>>n;
    if (n == 0)
    {
        /* code */
        return 1;
    }
    for (int i = 1; i <= n; ++i)
    {
        /* code */
        factorial *=i;
    }
    cout<<"Factorial of "<<n<<" is "<<factorial;
    return 0 ;
}