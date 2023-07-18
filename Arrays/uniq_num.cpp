#include<iostream>
using namespace std;

int main(){

    int arr[5]={2,1,3,2,3};
    int size=5;
    int ans=0;

    for(int i=0;i<size;i++){
       ans=ans^arr[i];
    }
    cout<<ans;
}