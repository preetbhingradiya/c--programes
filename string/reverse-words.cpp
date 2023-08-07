#include <iostream>
#include <vector>
using namespace std;

void reverseWords(string s)
{

    vector<string> tmp;
    string str = "";
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == ' ')
        {
            tmp.push_back(str);
            str = "";
        }
        else
        {  
            str += s[i];
        }
    }

    tmp.push_back(str);  //much only becuse no pace in fornte

    int i;
    for (i = tmp.size() - 1; i >= 0; i--)
    {
        cout << tmp[i] << " ";
    }
}

int main()
{
    string s = "i like coding very much";
    reverseWords(s);
    return 0;
}