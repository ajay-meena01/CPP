#include <iostream>

using namespace std;

int c=1;
void Toh(int n,char from,char to,char via)
{
    if (n!=0)
    {
        Toh(n-1,from,via,to);
        cout<<"Step: "<<c++<<")"<<" Move Disk "<<n<<" from tower "<<from<<" to tower "<<to<<endl;
        Toh(n-1,via,to,from);
    }
}

int main()
{
    int N;
    cout<<"Enter the no. of disks you want: ";
    cin>>N;
    cout<<endl;
    Toh(N,'A','C','E');
    return 0;
}