// Find largest sum contiguous subarray [V. IMP]

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long maxSubarraySum(int* arr, int size){
        long sum = INT_MIN;
        long c = 0;

        for (int  i = 0; i < size; i++)
        {
            /* code */
            c+=arr[i];
            sum = max(sum,c);
            if(c<0)
            {
                c = 0;
            }
        }
        
    return sum;
    }

};
int main()
{
    int t,n;
    cout<<"Enter the value of t: ";
    cin>>t;
    while(t--)
    {
        cout<<"Enter the value of n: ";
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>arr[i];
        }
        
        Solution ob;
        cout<<ob.maxSubarraySum(arr,n);
    }
    
    return 0;
}














//////////////////////////////////////////