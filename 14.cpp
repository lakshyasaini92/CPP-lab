#include<iostream>
using namespace std;
int main()
{
    float n,sum,avg;
    cout<<"Enter the no. of natural number you want to find average of: ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    
    avg = sum/n;
    cout<<"Average of first "<<n<<" natural numbers is "<<avg;

return 0;
}