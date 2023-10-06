// Write a C++ program to check if a number is a prime number.

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
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    if (isprime(num)){
        cout<<num<<" is a prime number.";
    }else
    {
        cout<<num<<" is not a prime number.";
    }
    return 0 ;
}

/////////

