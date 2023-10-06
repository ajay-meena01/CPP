// write a program to cyclically rotate an array by one.

#include<iostream>
using namespace std;

void rotate_array(int* arr, int size)
{
    for (int i = 0; i <size; i++)
    {    
        swap(arr[0],arr[i]);
    }
    
}

void inputarr(int* arr, int size)
{
    cout<<"Enter the element of array: ";
    for (int i = 0; i < size; i++)
    {
        /* code */
        cin>>arr[i];
    }
}

void print_array(int* arr, int size)
{
    cout<<"{";
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    cout<<"}";
}

int main()
{
    int* arr;
    int size;
    cout<<"Enter size of array: "<<endl;
    cin>>size;
    arr = new int[size];

    inputarr(arr,size);
    print_array(arr,size);
    rotate_array(arr,size);
    print_array(arr,size);
    return 0;
}