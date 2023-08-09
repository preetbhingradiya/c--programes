#include <iostream>
#include <vector>
using namespace std;

int main()
{     
  // rowI      colI     element=11
    // 1   4    11
    // 2   5    20
    // 3   6    35

    int arr[3][4] = {{1, 4, 11}, {2, 5, 20}, {3, 6, 35}}; 
    int row = 3;
    int col = 3;
    int rowIndex = 0;
    int colIndex = col - 1;

    int target;
    cout << "search element waht you can found :";
    cin >> target;

    while (rowIndex < row && colIndex >= 0)
    {
        int element = arr[rowIndex][colIndex];

        if (element == target)
        {
            cout << "Element is here ";
            break;
        }
        else if (element < target)
        {
            rowIndex++;
        }
        else
        {
            colIndex--;
        }
    }
    return 0;
}