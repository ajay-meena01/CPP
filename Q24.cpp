#include<iostream>
using namespace std;

int binarysearch(int arr[], int l, int r, int x){

    int m = l + (r - l)/2;
    while (l<=r)
    {
        /* code */
        if (arr[m] == x)
        {
            /* code */
            return m;
        }
        if (arr[m]<x)
        {
            /* code */
            l = m+1;
        }
        else
        {
            r = m-1;
        }
        
    }
    return -1;
}
int main(void)
{
    int arr[] = {2,3,4,5,6,7,8,9,12,15,16,17,20};
    int x = 16;

    int n = sizeof(arr)/sizeof(arr[0]);
    int result = binarysearch(arr, 0,n-1, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;

    return 0 ;
}