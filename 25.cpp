#include<iostream>
using namespace std;

int main(){

    int size,max = 0,smax = 0;
    cout<<"Enter the size of array: ";
    cin>>size;
    
    int arr[size];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }
        else if(arr[i]>smax && arr[i]<max){
            smax=arr[i];
        }
    }
    
    cout<<"Second largest element is: "<<smax<<endl;

return 0;
}