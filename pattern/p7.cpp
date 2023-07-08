#include <iostream>
using namespace std;
int main()
{
    int no, i = 1;
    cout << "enter the no :";
    cin >> no;

    while (i <= no)
    {
        int j = 1,value=i;
        while (j <= i)
        {
            cout << value;
            value++;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}