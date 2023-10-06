// move all negative element one side 

#include<iostream>
using namespace std;

void rearrange(int* arr, int size)
{
    int j = 0;
    for(int i = 0; i<size;i++)
    {
        if(arr[i]<0){
            if (i != j)
                swap(arr[i],arr[j]);
            j++;
        }
    }

}
void inputarr(int* arr, int size)
{
    cout<<"Enter "<<size<<" intgers."<<endl;
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
    cout<<"Enter size of array:"<<endl;
    cin>>size;
    arr = new int[size];
    inputarr(arr,size);
    print_array(arr,size);
    rearrange(arr,size);
    print_array(arr,size);
    return 0 ;
}