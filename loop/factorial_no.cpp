#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum=1;
    cout << "Enter the number :";
    cin >> n;

    for(int i=1;i<=n;i++){
        sum=sum*i;
    }
    cout<<"numer of factorial :"<<sum;
}