#include <iostream>
using namespace std;

int ispossibale(int arr[], int size, int student, int mid)
{

    int stucout = 1;
    int pagesum = 0;

    for (int i = 0; i < size; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            stucout++;
            if (stucout > student || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int main()
{

    int arr[4] = {10, 50, 60, 70};
    int size = 4;
    int student = 2;
    int sum = 0;
    int ans = -1;
    int s = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    int e = sum;
    int mid = (s + e) / 2;

    while (s <= e)
    {
        if (ispossibale(arr, size, student, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    cout<<"minimum nmber of sum is :"<<ans;
}