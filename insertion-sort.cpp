#include <iostream>
using namespace std;

int main()
{

    int arr[6] = {4, 3, 10, 33, 0, 9};
    int size = 6;

    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        // cout<<temp<<" ";
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}