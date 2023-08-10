#include <iostream>
using namespace std;
int main()
{
    int n, i = 2;
    cout << "enter the no :";
    cin >> n;
    int count=0;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "number is not prime" <<  "\t"<<i << "\n";
            count++;
        }
        else
        {
            cout << "number is  prime" << "\t"<<i << "\n";
        }
        i = i + 1;
    }
    cout<<count;
}