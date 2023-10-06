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

void merge(int* arr, int f, int m, int l)
{
    int* brr = new int[l-f+1];

    int i,j,k;

    for(i=f,j=m+1,k=0; i<=m && j<=l; )
    {
        if(arr[i]<=arr[j])
        {
            brr[k++]=arr[i++];
        }
        else
        {
            brr[k++]=arr[j++];
        }
    }
    while(i<=m)
    {
        brr[k++]=arr[i++];
    }
    while(j<=l)
    {
        brr[k++]=arr[j++];
    }

    for(i=f,j=0; i<=l; )
    {
        arr[i++]=brr[j++];
    }

    delete[] brr;
}

void mergeSort(int* arr, int f, int l)
{
    if(f>=l)
        return;

    int m=(f+l)/2;
    mergeSort(arr, f, m);
    mergeSort(arr, m+1, l);
    merge(arr, f, m, l);
}
/////////////////////////////////////////////////////////
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
////////////////////////////////////////////////////////

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


int main()
{
    int* arr;
    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    arr = new int[size];
    int option;
    do
    {
        cout<<"Which sorting algorithm you want to use:"<<endl;
        cout<<"1. Selection sort"<<endl;
        cout<<"2. Bubble sort"<<endl;
        cout<<"3. Insertion sort"<<endl;
        cout<<"4. Merge sort"<<endl;
        cout<<"5. Quick sort"<<endl;
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
        else if(option == 4)
        {
            inputarr(arr,size);
            print_array(arr,size);
            mergeSort(arr,0,size-1);
            print_array(arr,size);
        }
        else if(option == 5)
        {
            inputarr(arr,size);
            print_array(arr,size);
            quik_sort(arr,0,size-1);
            print_array(arr, size);
        }
    }
    while(option != 0);
    return 0;
}
