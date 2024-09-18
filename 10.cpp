#include<iostream>
using namespace std;

int main(){

    int num,count = 0;
    cout<<"Enter a positive integer: ";
    cin>>num;

    if(num <= 1){
        cout<<"Number is neither prime nor composite";
    }
    else{
        for(int i=1;i<=num;i++){
            if(num%i == 0){
                count++;
            }
        }

        if (count == 2)
        {
            cout << "Number is prime";
        }
        else
        {
            cout << "Number is not prime";
        }
    }

return 0;
}