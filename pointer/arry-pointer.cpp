#include<iostream>
using namespace std;

int update(int *ptrNum){

    //address 
    // ptrNum=ptrNum+1; //adress can not cange use this 

    //value
    *ptrNum=*ptrNum+1;
}

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

    //funcation
    int num=5;
    int *ptrNum=&num;

    //before address
    cout<<"before address :"<<ptrNum<<endl;
    //befor value
    cout<<"befor value :"<<*ptrNum<<endl;
    update(ptrNum);
    cout<<"after address :"<<ptrNum<<endl;

    cout<<"after value :"<<*ptrNum<<endl;

    return 0;
}