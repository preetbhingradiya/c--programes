#include <iostream>
using namespace std;
int main()
{

    int a, b;
    cout << "Enter the no of a :";
    cin >> a;
    cout << "Enter the no of b :";
    cin >> b;

    char no;
    cout << "Enter the operation you want performes :";
    cin >> no;

    switch (no)
    {
    case '+':
        cout << "sum of a + b is :" << a + b << endl;
        break;

    case '-':
        cout << "substarction of a - b is :" << a - b << endl;
        break;

    case '*':
        cout << "multipication of a * b is :" << a * b << endl;
        break;

    case '/':
        cout << "divition of a / b is :" << a / b << endl;
        break;

    case '%':
        cout << "modulo of a % b is :" << a % b << endl;
        break;

    default:"please enter are right operation";
        break;
    }
}