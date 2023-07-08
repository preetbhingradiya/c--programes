#include <iostream>
using namespace std;
int main(){
    int no,i=1;
    cout<<"eneter the no :";
    cin>>no;

    while(i<=no){
        int j=1;
        while(j<=no){
            char ch='A'+i-1;
            cout<<ch<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}