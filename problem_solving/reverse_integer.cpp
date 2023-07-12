#include <iostream>
using namespace std;
int main()
{
    int no;
    cout << "Enter the vslue of no :";
    cin >> no;

    int ans = 0;
    while (no != 0)
    {
        int digit = no % 10;
        ans = (ans * 10) + digit;
        no = no / 10;
    }
    cout << ans;
}