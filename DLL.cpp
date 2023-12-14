#include <iostream>

using namespace std;

class DNode
{
public:
    int data;
    DNode *prev,*next;
    DNode(int dat,DNode* p=0,DNode* n=0)
    {
        data=dat;
        prev=p;
        next=n;
    }
};
class DLL
{
private:
    DNode *head,*tail;
public:
    DLL()
    {
        head=tail=0;
    }
    ~DLL();
    bool isEmpty();
    void addToHead(int dat);
    void addToTail(int dat);
    bool isInList(int dat);
    int deleteFromHead();
    int deleteFromTail();
    void deleteElement(int el);
    void display();
};
bool DLL::isEmpty()
{
    return head==0;
}
void DLL::addToHead(int el)
{
    if(head==0)
    {
        DNode* temp=new DNode(el);
        head=tail=temp;
    }
    else
    {
        DNode* temp=new DNode(el);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}
void DLL::addToTail(int el)
{
    if(tail==0)
    {
        DNode* temp=new DNode(el);
        head=tail=temp;
    }
    else
    {
        DNode* temp=new DNode(el);
        temp->prev=tail;
        tail->next=temp;
        tail=temp;
    }
}
void DLL::display()
{
    for( DNode*ptr=head ; ptr!=0 ; ptr=ptr->next )
    {
        cout<<ptr->data<<" ";
    }
    cout<<endl<<endl;

}
bool DLL::isInList(int el)
{
    for( DNode*ptr=head ; ptr!=0 ; ptr=ptr->next )
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
DLL::~DLL()
{
    DNode*temp;
    for(DNode*ptr=head;ptr!=0;)
    {
        temp=ptr->next;
        delete ptr;
        ptr=temp;
    }
    head=tail=0;
}
int DLL::deleteFromHead()
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
        DNode* temp=head;
        int dat=head->data;
        head=head->next;
        head->prev=0;
        delete temp;
    }
}
int DLL::deleteFromTail()
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
        DNode* temp=tail;
        int dat=tail->data;
        tail=tail->prev;
        tail->next=0;
        delete temp;
    }
}
void DLL::deleteElement(int el)
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
        DNode* temp;
        for(temp=head;temp!=0 && temp->data!=el;temp=temp->next);
        if(temp!=0)
        {
            if(temp==head)
                deleteFromHead();
            else if(temp==tail)
                deleteFromTail();
            else
            {
                temp->next->prev=temp->prev;
                temp->prev->next=temp->next;
                delete temp;
            }
        }
        else
        {
            cout<<"Element "<<el<<" not found for deletion"<<endl<<endl;
        }
    }
}
int main()
{
    DLL list;
    list.addToHead(1);
    list.addToHead(0);
    list.addToTail(2);
    list.addToTail(3);
    list.addToTail(4);
    list.addToTail(5);
    list.addToTail(6);
    list.addToTail(7);
    cout<<"Elements of the list are: ";
    list.display();
    list.isInList(6);
    list.deleteFromHead();
    list.deleteFromTail();
    list.deleteElement(5);
    list.deleteElement(10);
    cout<<"Elements of the list after deletion are: ";
    list.display();
}