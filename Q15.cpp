// Implement a function to calculate the area of a circle given its radius.

#include<iostream>
#include<cmath>
using namespace std;
const double PI = 3.14159265358979323846;
double calculateCircleArea(double radius){
    return PI * pow(radius, 2);

}
int main(){
    double radius;
    cout<<"Enter the radius of the circle: "<<endl;
    cin>>radius;
    if (radius >= 0)
    {
        /* code */
        double area = calculateCircleArea(radius);
        cout<<"Area of circle with rsdius "<<radius<<" is: "<<area;
    }else
    {
        cout<<"Error Invalid radius. Please enter a non-negative value.";
    }
    
    
    return 0 ;
}