#include <iostream>
using namespace std;
int main(){
    int no,i=1;
    char ch='A';
    cout<<"eneter the no :";
    cin>>no;

    while(i<=no){
        int j=1;
        while(j<=no){
            cout<<ch<<" ";
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}