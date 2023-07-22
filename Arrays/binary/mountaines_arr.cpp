#include <iostream>
using namespace std;

int mountaines(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = (s + e) / 2;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
            // e=mid-1;
        }
        mid = (s + e) / 2;
    }
    return s;
}

int main()
{

    int arr[5] = {2, 3, 4, 5, 1};

    int temp = mountaines(arr, 5);

    cout << "peak of moutaines nuber of indexs is :" << temp;
}