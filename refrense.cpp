#include<iostream>
using namespace std;

//refrense variable;
void update(int& i){
    i++;
}

int main(){ 
    new int;
    int i=0;
    int&j=i;   //refrense variable alocate same mamory but differnt name

    // i++;
    // cout<<i<<endl;  //1
    // cout<<j<<endl;  //1
    // j++;
    // cout<<i<<endl;  //2
    // cout<<j<<endl;  //2

    cout<<"Before i:-"<<i<<endl;
    update(i);
    cout<<"aftter i:-"<<i<<endl;
}