#include <iostream>
using namespace std;
int main()
{
    int n, i = 2;
    cout << "enter the no :";
    cin >> n;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "number is not prime" <<  "\t"<<i << "\n";
        }
        else
        {
            cout << "number is  prime" << "\t"<<i << "\n";
        }
        i = i + 1;
    }
}