#include<iostream>
using namespace std;

int main(){

    int val=5;
    // cout<<val<<endl;

    int *ptr=&val;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;

    int **ptr2=&ptr;
    // cout<<ptr2<<endl;
    // cout<<**ptr2<<endl;

   { cout<<val<<endl;  
    cout<<*ptr<<endl;
    cout<<**ptr2<<endl;}  //same value can return

    {cout<<&val<<endl;
    cout<<ptr<<endl;
    cout<<*ptr2<<endl;}  //same addrres can return to the val varibale
    

}