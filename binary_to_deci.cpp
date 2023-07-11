#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int no;
    cout << "Enter the value of no :";
    cin >> no;

    int i = 0, ans = 0;
    while (no != 0)
    {

        int digit = no % 10;

        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }
        no=no/10;
        i++;
    }
    cout<<ans;
}