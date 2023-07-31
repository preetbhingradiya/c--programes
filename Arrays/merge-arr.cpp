#include <iostream>
using namespace std;

int merge(int arr1[], int n, int arr2[], int m, int arr3[])
{

    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    while (i < n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while (j < m)
    {
        arr2[k] = arr2[j];
        k++;
        j++;
    }
}

int print(int arr3[],int n){
    for(int i=0;i<n;i++){
        cout<<arr3[i]<<" ";
    }
}

int main()
{

    int arr1[5] = {2, 5, 7, 8, 10};
    int arr2[3] = {1, 3, 9};

    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);

    print(arr3,8);
}