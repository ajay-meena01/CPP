// Find the union and intersection of the two sorted arrays.

#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public: static int

    doUnion(int a[], int n, int b[], int m)
    {
        set<int>s;
        for (int i = 0; i < n; i++)
        {
            /* code */
            s.insert(a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            /* code */
            s.insert(a[i]);
        }
        return s.size();
        
    }
};

int main(){
    int t;
    cout<<"Enter the value of t: "<<endl;
    cin>>t;
    while (t--)
    {
        /* code */
        int n, m;
        cout<<"Enter the value of n and m: "<<endl;
        cin>>n>>m;

        int a[n], b[m];
        cout<<"Enter the value of a[n] and b[m]: "<<endl;
        for (int  i = 0; i < n; i++)
        {
            /* code */
            cin>>a[i];
        }
        for (int i = 0; i < m; i++)
        {
            /* code */
            cin>>b[i];
        }
        Solution ob;
        cout<<ob.doUnion(a, n, b, m)<<endl;
    }
    return 0;
}