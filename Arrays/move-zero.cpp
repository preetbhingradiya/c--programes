#include <iostream>
using namespace std;

int main()
{

    int arr[6] = {0, 1, 3, 0, 1, 12};
    int size = 6;

    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;

    int i = 0;
    for (int j = 0; j < size; j++)
    {
        if (arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }

    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}