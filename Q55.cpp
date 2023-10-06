#include<iostream>
using namespace std;

class Stack{
    private:
    double* arr;
    int top;
    int maxSize;

public:
    Stack(int size) {
        maxSize = size;
        arr = new double[maxSize];
        top = -1;
    }

    // ~Stack() {
    //     delete[] arr; // use for remove empty memory allocation of stack
    // }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == maxSize - 1;
    }

    void push(double data) {
        if (isFull()) {
            cout << "Stack is full. Cannot push " << data << endl;
            return;
        }
        arr[++top] = data;
    }

    double pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            return -1;
        }
        cout<<"The popped element is "<< arr[top] <<endl;
        return arr[top--];
    }

    double elementAtTop() {
        if (isEmpty()) {
            cout << "Stack is empty. elementAtTop is not possible." << endl;
            return -1;
        }
        return arr[top];
    }
};



int main()
{
    char postfix[20];
    cout<<"Enter the valid postfix expresion: ";
    cin>>postfix;
    Stack myStack(10);
    int i;
    char temp;
    double val;
    for ( i = 0; i < postfix[i]!='\0'; i++)
    {
        /* code */
        temp = postfix[i];
        if(temp>='A' && temp<='Z')
        {
            cout<<"Enter the value of temp: "<<temp<<" ";
            cin>>val;
            myStack.push(val);
        }
        else
        {
            double oper2=myStack.pop(),oper1=myStack.pop(),result;
            switch (temp)
            {
            case '+':
                result = oper1+oper2;
                break;
            case '-':
                result = oper1-oper2;
                break;
            case '*':
                result = oper1*oper2;
                break;
            case '/':
                result = oper1/oper2;
                break;            
            default:
                break;
            }
            myStack.push(result);
        }
    }
    
    cout<<" result of postfix expreasion: "<<myStack.pop();
    return 0;
}