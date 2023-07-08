#include <iostream>
using namespace std;
int main()
{
    int no, i = 1;
    cout << "enter the no :";
    cin >> no;

    while (i <= no)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            // cout<<i;   //number print
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}