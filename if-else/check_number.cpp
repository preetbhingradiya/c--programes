#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the value of A :";
    cin >> a;

    if (a > 0)
    {
        cout << "value is positive numbe";
    }
    else if (a < 0)
    {
        cout << "value is negative number";
    }
    else
    {
        cout << "value is eqval to zero";
    }
}