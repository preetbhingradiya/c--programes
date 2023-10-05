#include<iostream>
using namespace std;

int main(){
    int num=5;
    
     cout<<"address of num :"<<&num<<endl;

    int *ptr=&num;
     cout<<"value of num :"<<*ptr;
     cout<<"address of num :"<<ptr<<endl;
    
}