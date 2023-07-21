#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;
    // start-(end-start)/2

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else // arr[mid]>key
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{

    int arr[] = {12, 33, 44, 55, 88, 99};
    int size = 6;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int index = binarySearch(arr, size, 33);

    cout << "index of value is :" << index;
}