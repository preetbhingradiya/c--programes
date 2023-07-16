#include <iostream>
using namespace std;

void twoele(int arr[], int n)
{

    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[6] = {12, 32, -10, 11, 90, 1};

    twoele(arr, 6);

    printarr(arr, 6);
}