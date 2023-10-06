// Find the Unoin and intersection of the two sorted array.

#include<iostream>
using namespace std;
void sorted_array(int* arr1,  int size1, int* arr, int size2)
{
    // write code here

}
void inputarr(int* arr1, int size1,int* arr2, int size2)
{
    cout<<"Enter the element of array: ";
    for (int i = 0; i < size1; i++)
    {
        /* code */
        cin>>arr1[i];
    }
    for (int j = 0; j < size2; j++)
    {
        /* code */
        cin>>arr2[j];
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
    int* arr1;
    int * arr2;
    int size1;
    int size2;
    cout<<"Enter size of array: "<<endl;
    cin>>size1;
    arr1 = new int[size1];
    arr2 = new int[size2];
    return 0;
}