#include <iostream>

#include <cmath>

using namespace std;

class CQueue
{
    int rear;
    int front;
    int maxSize;
    int* arr;

public:
    CQueue(int size)
    {
        rear=front-1;
        maxSize = size;
        arr=new int[maxSize];
    }
    //void enqueue(int ele);
    //void dequeue();
    //void display();

    
    void enqueue(int ele)
    {
        if((rear==maxSize-1 && front==0)||((rear+1)%maxSize==front-1))
        {
            cout<<"queue is full";
            return;
        }
        else if(rear==front==-1)
        {
            front=0;
            arr[rear++]=ele;
            return;
        }
        else
        {
            rear=(rear+1)%maxSize;
            arr[rear]=ele;
            return;
        }
    }

    void dequeue()
    {
        if(rear==front==-1)
        {
            cout<<"Queue is empty";
            return;
        }
        else if(rear==front)
        {
            int temp=arr[front];
            front=rear=-1;
            return;
        }
        else
        {
            int temp=arr[front];
            front++;
            return;
        }
    }

    void display()
    {
        if(rear==front==-1)
        {
            cout<<"Queue is empty";
            return;
        }
        else if(rear>=front)
        {
            for (int i=front;i<=rear;i++)
            {
                cout<<arr[i]<<" ";

            }
            cout<<endl<<endl;
        }
        else
        {
            cout<<"Queue is:"<<endl;
            for (int i=front;i<=maxSize;i++)
                cout<<arr[i]<<endl;
            for(int j=0;j<front;j++)
                cout<<arr[j]<<endl;
        }
    }
};

int main()
{
    CQueue myqueue(7);
    myqueue.enqueue(10);
    myqueue.enqueue(20);
    myqueue.enqueue(30);
    myqueue.enqueue(40);
    myqueue.enqueue(50);
    cout<<"The queue is: ";
    myqueue.display();
    myqueue.dequeue();
    myqueue.dequeue();
    cout<<"The queue after deletion is: ";
    myqueue.display();
    return -1;
}