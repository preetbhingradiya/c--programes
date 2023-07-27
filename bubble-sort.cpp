#include <iostream>
using namespace std;

int bubble(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n-1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {12, 33, 10, 421, 120, 3};
    int n = 6;

    return bubble(arr, n);
}
