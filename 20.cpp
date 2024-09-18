#include <iostream>
using namespace std;

// Function template to add two values of different data types
template <typename T1, typename T2>
auto add(T1 a, T2 b) -> decltype(a + b)
{
    return a + b;
}

int main() 
{
    int x = 5;
    double y = 10.5;

    // Use the template function to add values of different types
    auto result = add(x, y);

    cout << "The sum of " << x << " and " << y << " is: " << result << endl;

    return 0;
}