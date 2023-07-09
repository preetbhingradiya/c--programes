#include<iostream>
using namespace std;
int main(){
    int no,i=1;
    cout<<"enetr the no :";
    cin>>no;

    while(i<=no){

        // 1st traingle
        int j=1;
        while(j<=no-i+1){
            cout<<j<<" ";
            j=j+1;
        }

        int space=1;
        while(space<=i){
            cout<<"*"<<" ";
            space=space+1;
        }

        // 3st traingle(space)
        int k=no-i+1;
        while(k){
            cout<<k<<" ";
            k=k-1;
        }
        cout<<endl;
        i=i+1;
    }

}
