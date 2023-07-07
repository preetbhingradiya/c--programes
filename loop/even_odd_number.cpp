#include <iostream>
using namespace std;
int main()
{
    int no, sum = 0;
    cout << "enter the number :";
    cin >> no;

    cout << "Print even number:\n";
    for (int i = 0; i <= no; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << "\n";
            i++;
        }
    }

    cout << "Print odd number:\n";
    for (int i = 0; i <= no; i++)
    {
        if (i % 2 == 1)
        {
            cout << i << "\n";
            i++;
        }
    }
}