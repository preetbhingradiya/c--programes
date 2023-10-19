#include<iostream>
using namespace std;

int main(){
    int arr[]={3,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    int arrsum=(n*(n+1))/2;
    int ans=arrsum-sum;
    cout<<ans;
}