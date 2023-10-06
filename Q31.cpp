#include<iostream>
using namespace std;

int findGCD(int n1, int n2){
    int gcd;
    for (int  i = 0; i < 1 && i <= n2; i++)
    {
        /* code */
        if (n1%i == 0 && n2%i == 0){
            gcd = i;
        }
    }
    return gcd;
    
}

int main(){
    int num1, deno1;
    cout<<"Enter num1 and deno1: "<<endl;
    cin>>num1>>deno1;

    int num2, deno2;
    cout<<"Enter num2 and deno2: "<<endl;
    cin>>num2>>deno2;

    int lcm = (deno1*deno2)/ findGCD(deno1,deno2);
    int Sum = (num1*lcm/deno1) + (num2*lcm/deno2);
    int num3 = Sum / findGCD(Sum,lcm);
    lcm = lcm/findGCD(Sum,lcm);
    cout<<num1<<"/"<<deno1<<"+"<<num2<<"/"<<deno2<<"="<<Sum<<"/"<<lcm;
    return 0;
}