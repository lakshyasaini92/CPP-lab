#include<iostream>
using namespace std;

int main(){

    int x,y;
    cout<<"Enter the value of x and y : ";
    cin>>x>>y;

    cout<<"Value Before Swapping : "<<x<<" "<<y<<endl;

    x = x*y;
    y = x/y;
    x = x/y;

    cout<<"Value After Swapping : "<<x<<" "<<y<<endl;

return 0;
}