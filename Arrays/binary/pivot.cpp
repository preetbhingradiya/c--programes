#include <iostream>
using namespace std;

int pivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = (s + e) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }
    return s;
}

int main()
{
    int arr[6] = {5, 7, 1, 2, 4,5};

    int store = pivot(arr, 6);

    cout << "Pivot index is :" << store;
}