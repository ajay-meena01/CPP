#include <iostream>
#include <string.h>
using namespace std;
 
    void functionupper(char []);
 
    int main()
    {
       char string[100]; 
       cout<<"Enter a string to convert it into upper case"<<endl;
       cin>>string;
 
       functionupper(string); // calling functionupper
       cout<<"Entered string in upper case is: "<< string;
 
       return 0;
    }
 
    void functionupper(char s[]) {
       int c = 0;
 
       while (s[c] != '\0') {
          if (s[c] >= 'a' && s[c] <= 'z') {
             s[c] = s[c] - 32;
          }
          c++;
       }
    }