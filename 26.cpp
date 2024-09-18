#include<iostream>
using namespace std;

int main(){

    int size1;
    cout<<"Enter the size of array 1 : ";
    cin>>size1;
    int arr1[size1];
    cout<<"Enter the elements of array 1 : ";
    for(int i = 0; i < size1; i++){
        cin>>arr1[i];
    }

    int size2;
    cout<<"Enter the size of array 2 : ";
    cin>>size2;
    int arr2[size2];
    cout<<"Enter the elements of array 2 : ";
    for(int i = 0; i < size2; i++){
        cin>>arr2[i];
    }

    int n = size1+size2;
    int result[n];
    for (int i = 0; i < size1; i++)
    {
        result[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        result[size1+i] = arr2[i];
    }

    cout<<"Merged array is : "<<"[ ";
    for(int i = 0; i < n; i++){

        cout<<result[i]<<" ";

    }
    cout<<"]";

return 0;
}