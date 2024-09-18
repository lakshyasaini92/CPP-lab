#include<iostream>
using namespace std;

int main(){

    int n = 5;
    char alpha = 'A';

    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
                cout<<alpha;
                alpha++;
        }
        alpha = 'A';
        cout<<endl;
    }
return 0;
}