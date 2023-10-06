#include <iostream>

using namespace std;

void selection_sort(int* arr, int size)
{
    for(int i = 0;i<size-1;i++)
    {
        int large_loc = 0;
        int j;
        for(j = 0;j<size-i;j++)
        {
            if(arr[j]>arr[large_loc])
                large_loc = j;
        }
        swap(arr[j-1],arr[large_loc]);
    }

}
void bubble_sort(int* arr, int size)
{
    int i,j;
    bool swaped;
    for(i = 0;i<size-1;i++)
    {
        swaped = false;
        for(j = 0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swaped = true;

            }
        }
        if(swaped == false)
    {
            break;
    }
    }
}
void insertion_sort(int* arr, int size)
{
    int i,j;
    for(i = 1;i<size;i++)
    {
        int current = arr[i];
        j = i - 1;
        while(j>=0 && arr[j]>current)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
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
    for(int i = 0;i<size;i++)
    {
        cout<<"{";
        cout<<arr[i]<<" ";
    }
    cout<<"}";

}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    int option;
    do
    {
        cout<<"Which sorting algorithm you want to use:"<<endl;
        cout<<"1. Selection sort"<<endl;
        cout<<"2. Bubble sort"<<endl;
        cout<<"3. Insertion sort"<<endl;
        cout<<"0. Exit"<<endl;

        cin>>option;
        if(option == 1)
        {
            inputarr(arr,size);
            print_array(arr, size);
            selection_sort(arr, size);
            print_array(arr, size);
        }
        else if(option == 2)
        {
            inputarr(arr,size);
            print_array(arr, size);
            bubble_sort(arr,size);
            print_array(arr,size);
        }
        else if(option == 3)
        {
            inputarr(arr,size);
            print_array(arr, size);
            insertion_sort(arr,size);
            print_array(arr, size);
        }
    }
    while(option != 0);
    return 0;
}
