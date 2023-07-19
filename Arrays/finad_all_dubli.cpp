#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 1, 4, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        int store=arr[arr[i] % size] = arr[arr[i] % size] + size;
    }

    for(int i = 0; i < size; i++){
        if(arr[i]>=size*2){
            cout<<i<<" ";
        }
    }
}