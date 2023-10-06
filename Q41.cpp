#include<iostream>
using namespace std;

void sawp(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bublesort(int arr[], int size)
{
    int i, j;
    bool swaped;
    for (int i = 0; i < size - 1; i++)
    {
        /* code */
        swaped = false;
        for (int j = 0; j < size - i -1; j++)
        {
            /* code */
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swaped = true;
            }
        }
        if (swaped == false)
        {
            /* code */
            break;
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
    bublesort(arr, size);
    print_sorted_array(arr, size);
    return 0 ;
}

