#include <iostream>
using namespace std;

int main()
{

    // sorting order
    int arr[6] = {2, 3, 3, 4, 5, 9};
    int size = 6;
    int arr1[3] = {1, 4, 5};
    int size1 = 3;
    int ans = 0;

    for (int i = 0; i < size; i++)
    {

        int element = arr[i];
        for (int j = 0; j < size1; j++)
        {
            int value = arr1[j];

            if (element < value)
            {
                break;
            }

            if (element == value)
            {
                ans = element;
                arr1[j] = INT16_MIN;
                cout << ans << " ";
                break;
            }
        }
    }
}