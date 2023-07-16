#include <iostream>
using namespace std;

bool search(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return 1;
        }
    };
    return 0;
}

int main()
{

    int arr[10] = {12, 88, 100, -123, 78, 345, 0, 11, -23, 55};

    int element;
    cout << "search the element you want the find :";
    cin >> element;

    int found = search(arr, 10, element);

    if (found)
    {
        cout << "elment is present in to the array";
    }
    else{
        cout<<"elment is not found";
    }
}