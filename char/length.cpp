#include<iostream>
using namespace std;

int main(){
    
    char num[20];
    cout<<"Enter your name :";
    cin>>num;
    int count=0;

    for(int i=0;num[i]!='\0';i++){
        count++;
    }

    cout<<"Your name is :"<<num<<endl;
    cout<<"length of name :"<<count;


}