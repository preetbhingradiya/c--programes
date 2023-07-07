#include <iostream>
using namespace std;
int main()
{
    int no, sum = 0;
    cout << "enter the no :";
    cin >> no;

    for (int i = 1; i <= no; i++)
    {
        if (i % 2 == 0)
        {
            cout << i;
            sum = sum + i;
        }
    }

    cout<< sum;
}