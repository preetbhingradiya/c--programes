#include <iostream>
using namespace std;
int main()
{
    int no, i = 1;
    cout << "enetr the no :";
    cin >> no;

    while (i <= no)
    {

        // space print
        int space = no - i;
        while (space)
        {
            cout << " ";
            space=space - 1;
        }

        // number print
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j=j+1;
        }
        int k=i-1;
        while(k){
            cout<<k;
            k=k-1;
        }
        cout<<endl;
        i=i+1;
    }
}
