#include<iostream>
using namespace std;

double calculateArea(double radius){
    const double pi = 3.14;
    return pi * radius * radius;
}
int main(){
    double radius;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    
    double area = calculateArea(radius);
    cout<<"The area of the circle is: "<<area<<endl;

return 0;
}