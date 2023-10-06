#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,S;
    cout<<"Enter a sting: "<<endl;
    cin>>s;
    int l = s.length();
    int j = 0;
    for (int i = l -1; i>=0; i--)
    {
        /* code */
        S[j] = s[i];
        cout<<S[j];
    }
    
    return 0 ;
}
