#include<iostream>
#include<string>
using namespace std;
// int main()
// {
//     char c;
//     cin>>c;
//     cout<<int(c);
//     return 0 ;
// }

// int  main(){
//     int n = 97;
//     for (int i = n; i <=122; i++)
//     {
//         /* code */
//         cout<<char(i)<<" ";
//     }
    
    
// }

int main()
{
    int character=0;
    char ch='A';
    do
    {
         character=int(ch);
 
         cout<<ch<<" ";
         character++;
         ch=char(character);
 
    }
    while(ch<='Z');
 
 
}