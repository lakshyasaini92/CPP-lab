#include<iostream>
using namespace std;

int main(){

    int x,y,temp;
    cout<<"Enter the value of x and y : ";
    cin>>x>>y;

    cout<<"Value Before Swapping : "<<x<<" "<<y<<endl;

    temp = x;
    x = y;
    y = temp;

    cout<<"Value After Swapping : "<<x<<" "<<y<<endl;

return 0;
}