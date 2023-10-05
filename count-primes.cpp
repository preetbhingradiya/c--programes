#include<iostream>
using namespace std;

bool prime(int n){
    if(n<=1) return false;

   for (int i = 2; i < n; i++)
   {
        if(n%i==0){
            return false;
        }
   }
   return true;
}

int main(){
    int no,count;
    cout<<"Enter the NO :-";
    cin>>no;

    for (int i = 2; i < no; i++)
    {
        if(prime(i)){
            count++;
        }
    }
    cout<<count<<" ";
}