#include<iostream>
using namespace std;

int main(){

    char value;
    cout<<"Enter a character: ";
    cin>>value;

    if(value>=97 && value<=122){
        value = value - 32;
        cout<<value<<endl;
    }
    else if(value>=65 && value<=90){
        value = value + 32;
        cout<<value<<endl;
    }

return 0;
}