#include <iostream>
using namespace std;

int detmin(int arr[], int n)
{
    int min = INT16_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int detmax(int arr[], int n)
{
    int maxi = INT16_MIN;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]); //1st way
        // if (arr[i] > max)
        // {
        //     max = arr[i];  //2st way
        // }
    }

    return maxi;
}

int main()
{
    int size;
    cin >> size;

    int num[20];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "the max number is :" << detmax(num, size) << endl;
    cout << "the min number is :" << detmin(num, size) << endl;
}