#include <iostream>
using namespace std;

int sensetivCase(char ch){
    if(ch>='a' && ch<'z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';  //C-A=2  2+a=c  upper convert into lower
        return temp;
    }
}

int palindrome(char num[], int size)
{

    int s = 0;
    int e = size - 1;

    while (s <= e)
    {
        if (sensetivCase(num[s]) != sensetivCase(num[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

int main()
{

    char num[20];
    cout << "Enter your name :";
    cin >> num;
    int size = 0;

    for (int i = 0; num[i] != '\0'; i++)
    {
        size++;
    }

    cout <<"palindrome yes(1) or no(0) :"<<palindrome(num, size);
}