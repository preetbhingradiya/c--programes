#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of number :";
    cin>>n;

    int a=0,b=1;
    for(int i=0;i<=n;i++){
        int nextno=a+b;
        cout<<nextno<<" ";

        a=b;
        b=nextno;
    }
}