// Write a C++ program to print all prime numbers between 1 and N.

#include<iostream>
using namespace std;

 bool isprime(int num){
    if (num<=1)
    {
        /* code */
        return false;
    }
    for (int i = 2; i * i <= num; ++i)
    {
        /* code */
        if (num%i == 0)
        {
            /* code */
            return false;
        }
        
    }
    return true;
 }

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    cout<<"Prime numbers between 1 and "<<n<<": ";
    for (int i = 2; i <= n; ++i)
    {
        /* code */
        if (isprime(i))
        {
            /* code */
            cout<<i<<" ";
        }
        
    }
    cout<<endl;
    return 0 ;
}