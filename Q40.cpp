#include<iostream>
using namespace std;

void select_largest_number(int arr[], int size)
{
    int l;
    for (int i = 0; i < size - 1; i++)
    {
        /* code */
        l = i;
        for (int j = i + 1; j < size; j++)
        {
            /* code */
            if(arr[j]<arr[l])
            l = j;
        }
        if (l != i)
        {
            /* code */
            swap(arr[l],arr[i]);
        }
    }
}
void print_sorted_array(int arr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
        // cout<<endl;
    }
    
}

int main()
{
    int size;
    cout<<"Enter size of array: "<<endl;
    cin>>size;
    int arr[size];
    for (int i = 0; i <size; i++)
    {
        /* code */
        cin>>arr[i];
    }
    select_largest_number(arr, size);
    print_sorted_array(arr, size);
    return 0 ;
}