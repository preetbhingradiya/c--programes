#include<iostream>
using namespace std;

int gcd(int a,int b){

    if(a==0){
        return b;
    }
    else if(b==0){
        return a;
    }


    while (a!=b)
    {
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    
}

int main(){

    int a,b;
    cout<<"Enter the value of A and B :";
    cin>>a>>b;

    int ans=gcd(a,b);

    cout<<" GCD of " << a << " & "<< b <<" :"<< ans;
}