#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i =1;
    char count = 'A';
    while (i<=n)
    {
        int j = 1,value = 1;
        while (j<=n)
        {
            /* code */
//             char ch = 'A'+j-1;
            cout<<count<<" ";
//            ch = ch+1;
//            value++;
            count=count+1;
            j=j+1;
            char value = 'A';

        }
        cout<<endl;
        i =i+1;    
    }
    return 0 ;
}