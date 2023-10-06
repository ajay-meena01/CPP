// //{ Driver Code Starts
// //Initial Template for C++


// #include<bits/stdc++.h>
// using namespace std;



// // } Driver Code Ends
// //User function Template for C++
// class Solution
// {
//     public:
//     string reverseWord(string str)
//     {
//         // Your code goes here
//         int len = str.length();
//         int n = len;
//         while (n--)
//         {
//             /* code */
//             cout<<str[n];
//         }
        
//         // for (int i = str.length() - 1; i >= 0; i--)
//         //     cout << str[i];
//     }
// };



// //{ Driver Code Starts.

// int main() {
	
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
//     	string s;
//     	cin >> s;
//     	Solution ob;
//     	cout << ob.reverseWord(s) << endl;
// 	}
// 	return 0;
	
// }


// // } Driver Code Ends


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    
}