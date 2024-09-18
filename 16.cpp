#include <iostream>
using namespace std;

int main() {
    int max = 0;
    int arr[10];
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++)
    {
        max = (arr[i] > max )? arr[i] : max;
    }

    cout<<"greatest no. is :- "<<max;
    
return 0;
}