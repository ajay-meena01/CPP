// Write a C++ program to count the number of words in a sentence.

#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int countsWords(const string& sentence)
{
    string iss(sentence);
    int count = 0;
    string word;
    while (iss>word)
    {
        /* code */
        count++;
    }
    return count; 
    
}
int main()
{
    string sentence;
    cout<<"Enter a sentence: "<<endl;
    std::getline(cin, sentence);
    int numWords = countsWords(sentence);
    cout<<"Number of words: "<<numWords;
    return 0 ;
}