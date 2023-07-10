#include<iostream>
using namespace std;
int main(){

    int no;
    cin>>no;

    int pro=1,sum=0;
    while(no!=0){

        int rem=no%10;
        pro=pro*rem;
        sum=sum+rem;

        no=no/10;
    }
    int ans=pro-sum;
    cout<<ans;
    // return 1;
}