#include <iostream>
using namespace std;

#define PI 3.14 // create PI macros
#define min(a, b) ((a < b) ? (a) : (b))

int main()
{
    int r = 8;
    double area = PI * r * r;
    cout << "Area of " << area<<endl;

    int a, b;
    cout << "Enter A :";
    cin >> a;
    cout << "Enter B :";
    cin >> b;

    cout << "Minimum value between" << a << " and " << b << " is: " << min(a, b);
}