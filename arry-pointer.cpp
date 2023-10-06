#include<iostream>
using namespace std;

int main(){

    // &arr[0]==arr==&arr  all are some and returen the address

    int arr[10];
    cout<<sizeof(arr)<<endl;

    int *ptr=arr;
    cout<<sizeof(ptr);

    int arr2[10]={120};
    //ERROR
    // arr2=arr2+1;
    cout<<"Address of arr2 :-"<<&arr2<<endl;

    //pointer can access
    int *p=&arr2[0];
    cout<<"Address of p :-"<<&p<<endl;
    cout<<"arr2[0] value :-"<<*p<<endl;

    cout<<p<<endl;
    p=p+1;
    cout<<p<<endl;
}