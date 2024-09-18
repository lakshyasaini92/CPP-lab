#include<iostream>
using namespace std;

int main(){

    int n = 4;

    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
                cout<<" ";
        }
        int number = 1;
        for(int j=1;j<=i;j++){
                cout<<number;
                number++;
        }
        
        for(int j=i-1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
return 0;
}