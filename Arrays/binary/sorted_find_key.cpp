#include<iostream>
using namespace std;

int pivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = (s + e) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }
    return s;
}

int binarySearch(int arr[], int s,int e, int key)
{
    int start = 0;
    int end = e;

    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else 
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main(){

    int arr[5]={7,9,1,2,3};
    int size=5;
    int key =2;

    int store=pivot(arr,size);
    if(key>=arr[store] && key<=arr[size-1]){
        int temp= binarySearch(arr,store,size-1,key);  //[1,2,3]
        cout<<"key index is :"<<temp;
    }
    else{
        int temp = binarySearch(arr,0,store-1,key);   //[7,9]
        cout<<"key index is :"<<temp;
    }
}