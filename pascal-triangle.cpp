#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int num=1;
        for(int k=0;k<(n-i)-1;k++){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<num<<" ";
            num=num*(i-k)/(k+1);
        }
        cout<<endl;
    }

}