#include<iostream>
using namespace std;

// function to calculate exponent of a number using recursion
int exp(int x,int y){
    if(y==0){
        return 1;
    }
    else{
        return x * exp(x,y-1);
    }
}
int main(){
    int x,y;
    cout<<"Enter two numbers: "<<endl;
    cin>>x;
    cin>>y;
    cout<<x<<" ^ "<<y<<" = "<<exp(x,y)<<endl;
return 0;
}