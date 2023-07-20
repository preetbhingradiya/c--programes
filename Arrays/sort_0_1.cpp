#include <iostream>
using namespace std;

int sortone(int arr[],int size){
    int left=0,right=size-1;

    while(left<right){
        while(arr[left]==0 && left<right){
            left++;
        }

        while (arr[right]==1 && left<right)
        {
            right--;
        }
        
        // arr[left]==1 && arr[right]==1
        if(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        
    }
}

int prinatarry(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[6] = {0, 1, 1, 0, 0, 1};
    int size = 6;

    sortone(arr,size);
    prinatarry(arr,size);
}