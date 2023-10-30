#include <iostream>
using namespace std;

int maxProfit(int arr[], int n)
{
    int max_profite = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i]  > arr[i-1])
            max_profite += arr[i] - arr[i-1];
        //1>7
        //5>1 == 5-1 -> 4
        //3>5
        //6>3 == 6-3 -> 3
        //4>6           7
    }
    return max_profite;
}

int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int store = maxProfit(arr, n);
    cout << store;
}