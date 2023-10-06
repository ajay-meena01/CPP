// Write a C++ program to check if a string is a palindrome.

#include<iostream>
#include<string>
using namespace std;
bool ispalindrome(const string& str){
    int left =0;
    int right = str.length()-1;
    while(left<right){
        if(str[left]!=str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;

}
int main(){
    string str;
    cout<<"Enter a string: "<<endl;
    cin>>str;
    if (ispalindrome(str)){
        cout<<str<<" is a palindrome.";
    }else
    {
        cout<<str<<" is not a palindrome.";
    }
    
    return 0 ;
}