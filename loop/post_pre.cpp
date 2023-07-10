#include <iostream>
using namespace std;
int main(){

    int no;
    cin>>no;

    // for(int i=0;i<=no;i+=2){
    //   cout<<i<<" ";

    //   if(i&1){
    //     continue;
    //   }

    //   i++;
    // }

    for(int i=0;i<no;i++){
        for(int j=i;j<=no;j++){
            if(i+j==10){
                break;
            }
            cout<<i<<" "<<j;
        }
    }
}