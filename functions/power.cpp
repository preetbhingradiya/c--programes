#include <iostream>
using namespace std;

int power()
{
    int num1, num2;
    cin >> num1 >> num2;

    int ans = 1;
    for (int i = 1; i <= num2; i++)
    {
        ans = ans * num1;
    }

    return ans;
}

int main()
{
    // int a, b;
    // cin >> a >> b;

    int answer = power();
    cout << "power of number is :" << answer;

    int answer2 = power();
    cout << "power of number is :" << answer2;
    return 0;
}