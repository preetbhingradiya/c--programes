#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int no, bin;
    cout << "Enter the vamlue of no :";
    cin >> no;

    while (no > 0)
    {
        bin = no % 2;
        cout << bin;
        no /= 2;
    }

    // methd no 2
    
    // int ans = 0;
    // int i = 0;
    // while (no != 0)
    // {

    //     int bit = no & 1;
    //     ans = bit * pow(10, i) + ans;

    //     no = no >> 1;
    //     i++;
    // }
    // cout<<"Answer is binary number : "<<ans;
}
