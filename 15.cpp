#include<iostream>
using namespace std;

int main(){
    int binary,i=0;
    int arr[16];
    cout<<"Enter a decimal number: ";
    cin>>binary;

    while(binary > 0){
        arr[i] = binary % 2;
        binary = binary/2;
        i++;
    }

    for(int j = i - 1; j >=0; j--){
        cout<<arr[j];
    }

return 0;
}