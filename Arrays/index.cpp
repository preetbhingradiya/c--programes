#include <iostream>
using namespace std;

int printarry(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << ends;
        // break;
    }
}

int main()
{

    int arry[15] = {1};
    int num = 15;
    printarry(arry, num);

    cout << " " << endl;

    int arry2[15] = {0};
    num = 10;
    printarry(arry2, num);
}