#include <iostream>

using namespace std;

class SNode
{
public:
    int data;
    SNode* next;
    SNode(){data=0;next=0;}
    SNode(int dat,SNode*n=0)
    {data=dat;next=n;}
};
class SLL
{
private:
    SNode *head,*tail;
public:
    SLL()
    {
        head=tail=0;
    }
    ~SLL();
    bool isEmpty();
    void addToHead(int dat);
    void addToTail(int dat);
    bool isInList(int dat);
    int deleteFromHead();
    int deleteFromTail();
    void deleteElement(int el);
    void display();
};
bool SLL::isEmpty()
{
    return head==0;
}
void SLL::addToHead(int el)
{
    head=new SNode(el,head);
    if(tail==0)
        tail=head;
}
void SLL::addToTail(int el)
{
    SNode*obj=new SNode(el);
    if(head==0)
        head=obj;
    else
        tail->next=obj;
    tail=obj;
}
void SLL::display()
{
    for( SNode*ptr=head ; ptr!=0 ; ptr=ptr->next )
    {
        cout<<ptr->data<<" ";
    }
    cout<<endl<<endl;

}
bool SLL::isInList(int el)
{
    for( SNode*ptr=head ; ptr!=0 ; ptr=ptr->next )
    {
        if(el==ptr->data)
        {
            cout<<"Element "<<el<<" is in the list"<<endl<<endl;
            return true;
        }
    }
    cout<<"Element "<<el<<" is not found in the list"<<endl<<endl;
    return false;
}
SLL::~SLL()
{
    SNode*temp;
    for(SNode*ptr=head;ptr!=0;)
    {
        temp=ptr->next;
        delete ptr;
        ptr=temp;
    }
    head=tail=0;
}
int SLL::deleteFromHead()
{
    if(head==0)
    {
        cout<<"The List is empty"<<endl<<endl;
        return -1;
    }
    else if(head==tail)
    {
        int el=head->data;
        delete head;
        head=tail=0;
        return el;
    }
    else
    {
        int el=head->data;
        SNode* temp=head;
        head=head->next;
        delete temp;
        return el;
    }
}
int SLL::deleteFromTail()
{
    if(head==0)
    {
        cout<<"The List is empty"<<endl<<endl;
        return -1;
    }
    else if(head==tail)
    {
        int el=tail->data;
        delete tail;
        head=tail=0;
        return el;
    }
    else
    {
        int el=tail->data;
        SNode* prev;
        for(prev=head;prev->next!=tail;prev=prev->next);
        delete tail;
        prev->next=0;
        tail=prev;
        return el;
    }
}
void SLL::deleteElement(int el)
{
    if(head==0)
    {
        cout<<"The List is empty"<<endl<<endl;
    }
    else if(head==tail)
    {
        if(head->data==el)
        {
            deleteFromHead();
        }
        else
        {
            cout<<"Element "<<el<<" not found for deletion"<<endl<<endl;
        }
    }
    else
    {
        SNode* prev=head;
        for(;prev->next!=0 && prev->next->data!=el;prev=prev->next);
        if(prev->next!=0)
        {
            SNode* temp=prev->next;
            prev->next=temp->next;
            delete temp;
            if(prev->next==0)
                tail=prev;
        }
        else
        {
            cout<<"Element "<<el<<" not found for deletion"<<endl<<endl;
        }
    }
}

class SLL_Queue
{
private:
    SLL mylist;
public:
    void display()
    {
        mylist.display();
    }
    void enqueue(int el)
    {
        mylist.addToTail(el);
    }
    int dequeue()
    {
        mylist.deleteFromHead();
    }
};

int main()
{
    SLL_Queue myQueue;
    myQueue.enqueue(1);
    myQueue.enqueue(2);
    myQueue.enqueue(3);
    myQueue.enqueue(4);
    cout<<"Elements of the Queue are :";
    myQueue.display();
    return 0;
}