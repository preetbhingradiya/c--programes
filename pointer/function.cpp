#include<iostream>
using namespace std;

int update(int *ptrNum){

    //address 
    // ptrNum=ptrNum+1; //adress can not cange use this 

    //value
    *ptrNum=*ptrNum+1;
}

int getsum(int arr[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=*(arr+i);  //or arr[i]
    }
    return sum;
}


int main(){

    int num=5;
    int *ptrNum=&num;

    
    cout<<"before address :"<<ptrNum<<endl;
    
    cout<<"befor value :"<<*ptrNum<<endl;
    update(ptrNum);
    cout<<"after address :"<<ptrNum<<endl;

    cout<<"after value :"<<*ptrNum<<endl;

    //sum
    int arr[5]={1,2,3,4,5};
    cout<<"sum of arr :"<<getsum(arr,5)<<endl;
    // cout<<"sum of arr :"<<getsum(arr+2,3)<<endl;   // value start can 3+4+5==12

    return 0;
}