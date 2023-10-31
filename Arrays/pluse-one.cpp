#include <iostream>
#include<algorithm>
using namespace std;


int main()
{

    int arr[] = { 1,
                  2,
                  3 };
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = n-1; i >= 0; i--)
    {
        if (arr[i] == 9)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] += 1;
        }
            cout<<arr[i]<<" ";
        // arr[0]=1;
        // cout<<arr[i]<<" ";
    }
}