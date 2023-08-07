#include <iostream>
using namespace std;

bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
        return 1;
    }
    return 0;
}

int sensetivCase(char ch){
    if((ch>='a' && ch<'z') || (ch>='0' && ch<'9')){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';  //C-A=2  2+a=c  upper convert into lower
        return temp;
    }
}

int palindrome(string num)
{

    int s = 0;
    int e =num.length() - 1;

    while (s <= e)
    {
        if (num[s] != num[e])
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

    string num;
    cout << "Enter your name :";
    cin >> num;
    string temp="";

    for (int i = 0; i < num.length(); i++)
    {
        if(valid(num[i])){
            temp.push_back(num[i]);
        }
    }
    
    for(int j=0;j<temp.length();j++){
        temp[j]=sensetivCase(temp[j]);
    }

    cout<<"palindrome yse(1) or no(0) :"<<palindrome(temp);
}