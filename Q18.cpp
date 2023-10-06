// Write a program to find the square root of a number.

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int n, s;
//     cout<<"Enter a postive integer: "<<endl;
//     cin>>n;
//     s = sqrt(n);
//     cout<<"the root of "<<n<<" is "<<s;
//     return 0 ;
// }
////////////////////////////////////

// Write a program to find the square root of a positive integer.

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    double s;
    cout<<"Enter a postive integer: "<<endl;
    cin>>n;
    if (n>0)
    {
        /* code */
        s = sqrt(n);
    }
    else
    {
        
        cout<<n<<" is not a positive number."<<endl;
    }
    cout<<"the root of "<<n<<" is "<<s;
    return 0 ;
}