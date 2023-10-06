#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int maxSize;

public:
    Stack(int size) {
        maxSize = size;
        arr = new int[maxSize];
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

    void push(int data) {
        if (isFull()) {
            cout << "Stack is full. Cannot push " << data << endl;
            return;
        }
        arr[++top] = data;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            return;
        }
        cout<<"The popped element is "<< arr[top] <<endl;
        top--;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty. Peek is not possible." << endl;
            return -1;
        }
        return arr[top];
    }
   void display() {
      if(top>=0) {
         cout<<"Stack elements are:";
         for(int i=top; i>=0; i--)
         cout<<arr[i]<<" ";
         cout<<endl;
         } 
      else
        cout<<"Stack is empty: ";
}
};

int main() {
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;

    Stack stack(size);

    while (true) {
        cout << "Stack Operations:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Quit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            int data;
            cout << "Enter the value to push: ";
            cin >> data;
            stack.push(data);
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            cout << "Top of the stack: " << stack.peek() << endl;
            break;
        case 4:
            stack.display();
            break;
        case 5:
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}