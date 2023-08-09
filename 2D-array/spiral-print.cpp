#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // int arr[3][4] = {{1, 2, 3, 4},
    //                  {5, 6, 7, 8},
    //                  {9, 10, 11, 12}};

    vector<vector<int>> matrix;
    vector<int> ans;

    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col;

    int firstRow = 0;
    int firstCol = 0;
    int lastRow = row - 1;
    int lastCol = col - 1;

    while (count < total)
    {

        // print first row
        for (int i = firstCol; count < total && i <= lastCol; i++)
        {
            ans.push_back(matrix[firstRow][i]);
            count++;
        }
        firstRow++;

        // print last col
        for (int i = firstRow; count < total && i <= lastRow; i++)
        {
            ans.push_back(matrix[i][lastCol]);
            count++;
        }
       lastCol--;

        // print last row
        for (int i = lastCol;count < total && i >= firstCol; i--)
        {
            ans.push_back(matrix[lastRow][i]);
            count++;
        }
        lastRow--;

        //print first col;
        for(int i=lastRow; count < total && i>=firstRow;i--){
            ans.push_back(matrix[i][firstCol]);
            count++;
        }
        firstCol++;

        
    }
}