// Write a C++ program to find the GCD (Greatest Common Divisor) of two numbers.

#include<iostream>
using namespace std;

int gcd(int num1, int num2){
    if (num2 == 0)
    {
        /* code */
        return num1;
    }
    return gcd(num1, num2 % num2);
    
}
int main(){
    int num1, num2;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;
    int result = gcd(num1, num2);
    cout<<" GCD: "<<result;
    return 0 ;
}

/////

#include<iostream>
using namespace std;
int main(){
    
    return 0 ;
}