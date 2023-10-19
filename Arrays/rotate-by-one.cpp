#include<iostream>
using namespace std;

void rotateByOne(int arr[],int n){
    int first=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }

    arr[0]=first;

}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    rotateByOne(arr,n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
}