#include <iostream>
using namespace std;
int main()
{

    int no;
    cout << "Enter total amount :";
    cin >> no;

    int a = no - (no / 100) * 100;
    int b = no - (no / 50) * 50;
    int c = no - (no / 20) * 20;
    int d = no - (no / 10) * 10;
    switch (100)
    {
    case 100:
        cout << "number of 100 notes :" << no / 100 << endl;
        cout << a << endl;
        switch (50)
        {
        case 50:
            cout << "number of 50 notes :" << a / 50 << endl;
            cout << b << endl;
            switch (20)
            {
            case 20:
                cout << "number of 20 notes :" << b / 20 << endl;
                cout << c << endl;
                switch (10)
                {
                case 10:
                    cout << "number of 10 notes :" << c / 10 << endl;
                    cout << d;
                }
            }
        }
            break;

        default:
            "please enter are right operation";
            break;
    }
}