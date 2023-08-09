#include <iostream>
using namespace std;

int printWave(int arr[][4], int row, int col)
{

    for (int col = 0; col < 4; col++)
    {
        if (col % 2 == 0)
        {
            for (int row = 0; row < 5; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            for (int row = 5 - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
        }
    }
}

int main()
{
                    //0  1  2  3
    int arr[5][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16},
                     {17, 18, 19, 20}};

    cout << printWave(arr, 5, 4);
}