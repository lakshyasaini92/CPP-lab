#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    int startDay, numDays;

    cout << "Enter the start day (0 for Sunday, 1 for Monday, etc.): ";
    cin >> startDay;
    cout << "Enter the number of days in the month: ";
    cin >> numDays;

    cout << "Sun Mon Tue Wed Thu Fri Sat\n";

    // Print initial spaces for the first week
    for (int i = 0; i < startDay; ++i)
    {
        cout << "    ";
    }

    // Print the days of the month
    for (int day = 1; day <= numDays; ++day)
    {
        cout <<setw(4) << day << " ";
        if ((startDay + day) % 7 == 0)
        {
            cout << "\n";
        }
    }
    cout << "\n";

    return 0;
}