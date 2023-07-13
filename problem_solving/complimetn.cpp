#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int no;
    cout << "Enter the vamlue of no :";
    cin >> no;

    int m = no;
    int mask = 0,ans=0;
    

    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
     ans=(~no) & mask;

    cout << "compliment of number : " << ans;
    
    if(no==0){
        cout<<1;
    }
}
// 5 input
// binary 101 and convwer & 010
// output 2