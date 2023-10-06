#include<iostream>
using namespace std;

int partition(int* arr, int low,int high)
{
    int pivot = arr[low];

    int cnt = 0;
    for (int i = low+1; i <= high; i++)
    {
        /* code */
        if(arr[i]<=pivot)
        {
            cnt++;
        }
    }
    // place pivot right position
    int pivotIndex = low +cnt;
    swap(arr[pivotIndex],arr[low]);

    // left and right part seaprate

    while (low < pivotIndex && high > pivotIndex)
    {
        /* code */
        while(arr[low]<= pivot)
            low++;
        while(arr[high]>pivot)
            high--;

        if (low < pivotIndex && high > pivotIndex)
            swap(arr[low++],arr[high--]);

    }




}

void quik_sort(int* arr, int low, int high)
{
    if(low>=high)
        return;

    int p = partition(arr, low, high);
    quik_sort(arr,low,p-1);
    quik_sort(arr,p+1,high);
}


void inputarr(int* arr, int size)
{
    cout<<"Enter "<<size<<" integers:";
    for(int i =0;i<size;i++)
    {
        cin>>arr[i];
    }
}
void print_array(int* arr, int size)
{
    cout<<"{";
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"}";

}


int main(void)
{

    int* arr;
    int size;
    cin>>size;
    arr = new int[size];
    inputarr(arr,size);
    quik_sort(arr,0,size-1);
    print_array(arr, size);
    return 0 ;
}
