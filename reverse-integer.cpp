#include <iostream>
using namespace std;

int reverseInteger(int x)
{
  int rev_num = 0;
  while (x > 0)
  {
    rev_num = rev_num * 10 + x % 10;
    x = x / 10;
  }
  return rev_num;
}

int main()
{
  int x;
  cout << "Enter the Number :- ";
  cin >> x;

  int rev_num = 0;
  while (x > 0)
  {
    rev_num = rev_num * 10 + x % 10;
    x = x / 10;
  cout <<  x%10 << " ";
  }

  // cout<<"Reverse of no. is -> "<<reverseInteger(x);

  return 0;
}