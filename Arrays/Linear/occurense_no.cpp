#include <iostream>
using namespace std;

int main()
{

    int arr[11];
    int size;
    cout << "enter the size of array :";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout<<"enter the x value you want to find :";
    cin >> x;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            sum++;
        }
    }
    cout << "Total number of occurrencse in array :" << sum;
}