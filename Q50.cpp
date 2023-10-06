#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
   int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr+n);
        int diff = arr[n-1]-arr[0];//assuming no diff is bigger than this
        for(int i = 1; i<n; i++)
        {
            if(arr[i]-k<0) continue;
            int mini = min(arr[0]+k, arr[i]-k); //trying to make all the towers except first tower to be min
            int maxi = max(arr[i-1]+k, arr[n-1]-k); //trying to make all the towers except last tower to be max
            diff = min(diff, maxi-mini);
        }
        return diff;
    }
};
int main()
{
    int t;
    cout<<"Enter the value of t: ";
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>k;
        cout<<"Enter the value of n: ";
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>arr[i];
        }
        
        Solution ob;
        auto ans = ob.getMinDiff(arr,n,k);
    }
    
    return 0;
}
