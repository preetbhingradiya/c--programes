#include <iostream>
using namespace std;

int squre(int num)
{
    int s = 0;
    int e = num - 1;
    int mid = (s + e) / 2;

    int ans = 0;
    while (s <= e)
    {
        int square = mid * mid;
        if (square == num)
        {
            return mid;
        }
        else if (square > num)
        {
            e = mid - 1;
        }
        else if (square < num)
        {
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return mid;
}

int main()
{

    int x;
    cout << "Enter the num :";
    cin >> x;

    int store = squre(x);
    cout << store;
}