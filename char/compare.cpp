#include<iostream>
using namespace std;

int main(){
    
    char num[4];
    cout<<"Enter your name :";
    cin>>num;
    int size=20;
    int s=0;
    int e=size-1;


    for(int i=s;i<e;i++){
        if(num[i]!=num[e]){
            return 0;
        }
        else{
            s++;
            e--;
            cout<<1;
            break;
        }
    }

}