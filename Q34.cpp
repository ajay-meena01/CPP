// Define a class which has at least two methods:
// getString: to get a string from console input
// printString: to print the string in upper case.
// Also please include simple test function to test the class methods.

#include <iostream>
#include <string>
using namespace std;

class MyClass {
    string str;
public:
    void getString() {
        cout << "Enter a string: ";
        getline(cin, str);
    }
    void printString() {
        cout << "The string in uppercase: " << endl;
        for (auto& c : str) {
            cout << (char)toupper(c);
        }
        cout << endl;
    }
};

int main() {
    MyClass obj;
    obj.getString();
    obj.printString();
    return 0;
}
