#include <iostream>
using namespace std;
int main(){
    int no,i=1,run=1;
    cout<<"enter the no :";
    cin>>no;

    while(i<=no){
        int j=1;
        while(j<=no){
            cout<<run<<" ";
            run=run+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}