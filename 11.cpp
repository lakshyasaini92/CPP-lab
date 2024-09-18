#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    double sum = 0;

    cout << "Enter the number of terms you want to add: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += pow(i,i) / i;
    }

    cout << "Sum = "<< sum << endl;

    return 0;
}