// Write a C++ program to print the Fibonacci sequence up to N terms.

#include<iostream>
using namespace std;
int main(){
    int N, num1 = 0, num2 = 1, nextTerm;;
    cout<<"Enter the  number of teems: "<<endl;
    cin>>N;
    cout<<"Fibonacci Sequence: ";
    for (int i = 1; i <= N; ++i)
    {
        /* code */
        if (i == 1)
        {
            /* code */
            cout<<num1<<" ";
            continue;
        }
        if (i == 2)
        {
            /* code */
            cout<<num2<<" ";
            continue;
        }
        nextTerm = num1 + num2;
        num1 = num2;
        num2 = nextTerm;
        cout<<nextTerm<<" ";
    }   
    return 0 ;
}