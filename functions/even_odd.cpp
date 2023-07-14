#include <iostream>
using namespace std;

int checknum()
{
    int num;
    cin >> num ;

    if(num%2==0){
        cout<<"this number is even";
    }
    else{
        cout<<"thie number is odd";
    }
}

int main()
{

    int answer = checknum();
    // cout << "power of number is :" << answer;
    return 0;
}