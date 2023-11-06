#include <iostream>
using namespace std;

int findesum(int arr[], int n)
{   
    int i=0;
    int store;
    while (i < n - 1)
    {
        int j = i + 2;

        if (j < n)
        {
           store = arr[i] + arr[j];
            return store;
        }
    }
}



int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"value of : "<<findesum(arr, n);
}