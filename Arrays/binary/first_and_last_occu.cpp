#include <iostream>
using namespace std;

int firstoccurrence(int arr[], int size, int key)
{

    int s = 0;
    int e = size - 1;
    int mid = (s + e) / 2;
    int ans = -1;

    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }

    return ans;
}

int lastoccurrence(int arr[], int size, int key)
{

    int s = 0;
    int e = size - 1;

    int mid = (s + e) / 2;
    int ans = 0;

    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }

    return ans;
}

int main()
{

    int arr[7] = {1, 2, 3, 3, 3, 4, 5};

    int store = firstoccurrence(arr, 7, 3);
    int temp = lastoccurrence(arr, 7, 3);

    // int sum = (temp - store) + 1;        total umber of ocuurence
    // cout << sum;

    cout << "first occurrences index is : " << store << endl;
    cout << "last occurrences index is  : " << temp << endl;
}
