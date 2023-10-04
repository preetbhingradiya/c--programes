#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int no[100], bin,n;
    cout << "Enter the vamlue of no :";
    cin >> n;

    int i = 0;
    while (n > 0)
    {
        no[i] = n % 2;
        n=n / 2;
        i++;
    }

    for (i = i - 1; i >= 0; i--)
    {
        cout << no[i];
    }

    // 10/2 = 5 =>0
    // 5/2  = 2 =>1
    // 2/2  = 1 =>0     //reverse arry then 1010
    // 1/2  = 0 =>1
}
