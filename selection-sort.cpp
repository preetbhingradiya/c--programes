#include <iostream>
using namespace std;

int selection(int arr[],int size){
    
    for (int i = 0; i < size; i++)
    {
        int midindex = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[midindex])
            {
                midindex = j;
            }
        }
        swap(arr[midindex], arr[i]);
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}

int main()
{

    int arr[20];
    int size;
    cout << "enter the size of arr :";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    int store=selection(arr,size);

    cout<<store;

}
