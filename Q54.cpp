// infix , prefix,and postfix 
// infix a+b*C = prefix +ab*c
// infix a+b*C = postfix abc*+

#include<iostream>
using namespace std;

class Stack{
    private:
    char* arr;
    int top;
    int maxSize;

public:
    Stack(int size) {
        maxSize = size;
        arr = new char[maxSize];
        top = -1;
    }

    ~Stack() {
        delete[] arr; // use for remove empty memory allocation of stack
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == maxSize - 1;
    }

    void push(char data) {
        if (isFull()) {
            cout << "Stack is full. Cannot push " << data << endl;
            return;
        }
        arr[++top] = data;
    }

    char pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            return -1;
        }
        cout<<"The popped element is "<< arr[top] <<endl;
        return arr[top--];
    }

    char elementAtTop() {
        if (isEmpty()) {
            cout << "Stack is empty. Peek is not possible." << endl;
            return -1;
        }
        return arr[top];
    }
};

int prec(char oper)
{
    switch (oper)
    {
    case '#': return -1;
    case '(': return 0;
    case '+':
    case '-': return 1;
    case '*':
    case '/': return 2;
    
    }
}


char infixToPostfix(char* infix, char* postfix, int Size )
{
    Stack myStack(15);
    myStack.push('#');
    char temp;
    char topElement;
    int j =0;
    for(int i = 0; infix[i]!='\0';i++)
    {
        temp = infix[i];
        if(temp >= 'A' && temp <= 'Z')
        {
            postfix[j++] = temp;
        }
        else if(temp =='(')
        {
            myStack.push(temp);
        }
        else if (temp == ')')
        {
            while((topElement=myStack.pop()) != '(')
            {
                postfix[j++] = topElement;
            }
        }
        else if (temp == '+' || temp == '-' || temp == '*' || temp == '/')
        {
            /* code */
            while(prec(temp) <= prec(topElement = myStack.elementAtTop()))
            {
                postfix[j++] = topElement;
                myStack.pop();
            }
            myStack.push(temp);

        }

    }
    while ((topElement=myStack.pop()) != '#')
    {
        /* code */
        postfix[j++] = topElement;
    }

}

int main()
{
    char infix[20], postfix[]={0,0,0,0,0,0,0,0};
    cout<<"Enter infix: ";
    cin>>infix;
    // cout<<infix<<endl;
    infixToPostfix(infix,postfix,20);
    cout<<endl<<postfix<<endl;
    
    return 0;
}
