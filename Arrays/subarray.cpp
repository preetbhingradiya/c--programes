#include <iostream>
using namespace std;

void subArray(int arr[], int n, int sum)
{
    for (int i = 0; i < n; i++)
    {
        int curentsum = arr[i];

        if (curentsum == sum)
        {
            cout << "Sum found at indexes " << i << endl;
            return;
        }
        else
        {
            for (int k = i + 1; k < n; k++)
            {
                curentsum += arr[k];

                if (curentsum == sum)
                {
                    cout << "Sum found between indexes "<< i << "and" << k << endl;
                    return;
                }
            }
        }
    }
    cout << "No subarray found";
    return;
}

int main()
{

    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 15;

    subArray(arr, n, sum);
}