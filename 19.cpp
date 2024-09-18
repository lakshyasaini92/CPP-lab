#include <iostream>
using namespace std;

// Function to calculate the volume of a cuboid with default arguments
double calculateVolume(double length = 1.0, double width = 1.0, double height = 1.0) {
    return length * width * height;
}

int main() {
    double length, width, height;
    cout << "Enter the length of the cuboid (default is 1.0): ";
    cin >> length;
    cout << "Enter the width of the cuboid (default is 1.0): ";
    cin >> width;
    cout << "Enter the height of the cuboid (default is 1.0): ";
    cin >> height;

    double volume = calculateVolume(length, width, height);
    cout << "The volume of the cuboid is: " << volume << endl;

    return 0;
}