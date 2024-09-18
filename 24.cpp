#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array: "<<endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Array before interchange: ";
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i]<<"";
    }

    int max = 0;
    int min = 0;
    int temp;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > arr[max]){
            max = i;
        }else if(arr[i] < arr[min]){
            min = i;
        }
    }

    temp = arr[max];
    arr[max] = arr[min];
    arr[min] = temp;

    cout<<endl<<"Array after interchange: ";
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i]<<" ";
    }
    
    
return 0;
}