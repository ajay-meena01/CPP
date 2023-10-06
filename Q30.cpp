#include<iostream>
using namespace std;

class Rational{
public:
    int num,deno;
    Rational (int n = 0 , int d = 0 ){
        num = n;
        deno = d;
    }
    Rational add(Rational rhs){
        Rational temp(0,0);
        temp.num = this->num/rhs.num;
        temp.deno = this->deno/rhs.deno;
        return temp;
    }
    void display(){
        cout<<this->num;
        
        cout<<this->deno;
    }

};

int main(){
    Rational a(2,3);
    Rational b(1,2);
    Rational c = a.add(b);;
    c.display();
    return 0;
}
