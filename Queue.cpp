#include<iostream>
using namespace std;

class Queue
{
    private:
    int* arr;
    int maxSize;
    int front;
    int rear;
    public:
    Queue(int size) 
    {
        maxSize =size ;
        arr = new int[maxSize];
        front=-1;
        rear=-1;
    }
    bool isEmpty()
    {
        return (rear ==-1);
    }
    bool isFull()
    {
        return (rear == maxSize-1);
    }
    void enqueue(int elem)  //enqueue function
    {
        if(isFull()){
            cout<<"Queue is full\n";
            return;
        }
        else if (isEmpty())
        {
            front = 0;
            rear = 0;
            arr[rear]= elem;
            return;
        }
            rear++;
            arr[rear] =elem;
        
    }
    int dequeue()   //dequeue function
    {
        int temp;
        if(isEmpty())
        {
            cout << "Queue is empty \n";
            return -1;
        }
        else if (front==rear)
        {
            temp=arr[front];    
            front = -1;
            rear = -1;
            return temp;
        }
            temp = arr[front];
            front++;
            return temp;
    }
    void displayQueue()
    {
        int i;
        if(isEmpty())
        {
            cout<<"Queue is empty";
            return;
        }
        else{
         for(i=front; i<=rear; i++)
         cout<<arr[i] <<" ";
         }
         cout<<endl;
        
    }
};
int main()
{
    Queue myq(4);
    myq.enqueue(5);
    myq.enqueue(7);
    myq.enqueue(2);
    myq.enqueue(10);
    myq.enqueue(12);

    myq.displayQueue();

    myq.dequeue();
    myq.dequeue();
    myq.displayQueue();
    return 0;
}