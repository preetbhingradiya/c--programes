#include <iostream>
using namespace std;

int fact(int num)
{
    int fact = 1;

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int Ncr(int num, int r)
{

    int n = fact(num);

    int demon = fact(r) * fact(num - r);

    return n / demon;
}

int main()
{
    int num, r;
    cin >> num >> r;

    cout<<"Answer is :"<<Ncr(num, r);;
}