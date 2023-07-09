#include <iostream>
using namespace std;
int main()
{
    int no, i = 1;
    cout << "enter the number :";
    cin >> no;

    while (i <= no)
    {
        int j = 1;
        char value = 'A'+i-1;
        while (j <= i)
        {
            cout << value;
            value = value + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}