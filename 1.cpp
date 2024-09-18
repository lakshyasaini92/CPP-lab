#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
    float x1,x2,y1,y2,distance;
    cout<<"Enter the value of x1 and x2: ";
    cin>>x1>>x2;
    cout<<"Enter the value of y1 and y2: ";
    cin>>y1>>y2;

    distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    cout<<"Distance = "<<distance<<endl;

return 0;
}