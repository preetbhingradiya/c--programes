
#include <iostream>
using namespace std;

// 2 binary 10
// 3 binary 11
// total sum of 1 is 1+1+1 =3

int bite(int a, int b)
{
    int bin = 1, sum = 0, bit = 1, sum2 = 0;
    while (a != 0)
    {
        bin = a % 2;
        a /= 2;
        // cout<<bin<<" ";
        if (bin == 1)
        {
            sum = sum + bin;
        }
    }
    // cout<<sum;
    while (b != 0)
    {
        bit = b % 2;
        b /= 2;
        if (bit == 1)
        {
            sum2 = sum2 + bit;
        }
    }
    int ans = sum + sum2;
    cout <<"Sum is binary no of 1 is :"<< ans;
}

int main()
{
    int a;
    cout << "Enter the value of no :";
    cin >> a;
    int b;
    cout << "Enter the value of no :";
    cin >> b;

    bite(a, b);
}