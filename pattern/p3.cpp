#include <iostream>
using namespace std;
int main(){
    int no,i=1;
    cout<<"enter the no :";
    cin>>no;

    while(i<=no){
        int j=1;
        while(j<=no){
            cout<<j;
            // cout<<no-j+1;   //revers pattern
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}