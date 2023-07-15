#include <iostream>
using namespace std;

int arrsum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{

    int size;
    cout << "Enter the size of array :";
    cin >> size;

    int num[20];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "sum of arry is :" << arrsum(num, size) << endl;
}