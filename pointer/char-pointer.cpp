#include<iostream>
using namespace std;

int main(){

    int arr[5]={1,2,3};
    // int can return the address of arr
    cout<<arr<<endl; // output:- 0x61fefc

    char ch[6]="abcde";
    //char can return the value of arr
    cout<<ch<<endl; // output:- abcde

    char *c=&ch[0];
    cout<<c<<endl; //aslo return value of arr not return address
}
