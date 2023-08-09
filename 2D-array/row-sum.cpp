#include <iostream>
using namespace std;

int sumOfRow(int arr[][3], int row, int col)
{
    int maxi=INT16_MIN;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        int rowIndex=-1;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        // cout << sum << " "; // sum of row
        if(sum>maxi){
            maxi=sum;
            rowIndex=row;
        }
    }
    cout<<maxi<<" ";
}

int main()
{

    int arr[3][3];

    cout << "Enter the array :";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << sumOfRow(arr, 3, 3);
}