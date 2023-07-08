#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "enter the no :";
    cin >> n;
    while (i <= n)
    {
        int j=i;
        while(j<=n){
            cout<<i;
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }
}