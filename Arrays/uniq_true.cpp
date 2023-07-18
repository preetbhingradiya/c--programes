#include <iostream>
using namespace std;

int main()
{

    int arr[6] = {1, 2, 3, 2, 3, 3};
    int size = 6;

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        if (arr[i] == ans)
        {
            cout << "uniq number";
        }
        ans++;
    }
    cout << "not uniq number";

    cout << ans << ' ';
}