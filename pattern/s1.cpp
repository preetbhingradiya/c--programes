#include <iostream>
using namespace std;
int main(){
    int no,i=1;
    cout<<"enter the no :";
    cin>>no;

    while(i<=no){

        //space print 
        int space=no-i;
        while(space){
            cout<<" ";
            space=space-1;
        }

        // stare print
        int j=1;
        while(j<=i){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}
