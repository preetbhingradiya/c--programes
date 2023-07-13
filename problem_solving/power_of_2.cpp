#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int no;
    cout << "enter the value of no :";
    cin >> no;

    int ans=0;
    int exit=false;
    for (int i = 0; i <= 30; i++)
    {
       ans = pow(2, i);
       //cout<<ans<<" ";

        if (ans == no ){
            exit=true;
            cout<< "true";
            break;
        }
    }
    if(!exit){
        cout<<"fasle";
    }
}