#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printarry(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{

    int arr[6] = {23, 11, 10, -2, 67, 0};

    reverse(arr, 6);

    printarry(arr, 6);
}