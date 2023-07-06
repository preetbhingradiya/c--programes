#include <iostream>
using namespace std;
int main(){

    char ch;
    cout<<"Enter the ch :";
    cin>>ch;

    if(ch>'a' && ch<'z'){
        cout<<"this character is loewercase";
    }
    else if(ch>'A' && ch<'Z'){
        cout<<"this character is uppercase";
    }
    else if(ch>'0' && ch<'9'){
        cout<<"this character is numerical number";
    }
    else{
        cout<<"this character is special character";
    }
}