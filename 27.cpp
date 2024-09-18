#include<iostream>
using namespace std;

int main(){

    int arr[] = {6,4,2,1,7,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i,target = 5;

    for (i = 0; i < n; i++)
    {
        if (arr[i]==target)
        {
            cout<<"Element is present at index "<<i<<endl;
            break;
        }
        
    }

    if(i==n){
        cout<<"Element is not present in array"<<endl;
    }
    
return 0;
}