#include<iostream>
using namespace std;

// n value is not chage but n value are copy and store another fumction
// pass by value
int dummy(int n){
    n++;
    cout<<"no is :"<<n<<endl;
}

int main(){
 
    int n;
    cin>>n;

    dummy(n);
    cout<<"ans is :"<<n;
}