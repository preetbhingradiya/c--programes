#include <iostream>
using namespace std;

int main()
{   
    string s="preet";
    int n=s.size();
    for (int i = 0; i < n; i++)
    {
        bool found = true;
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] == s[j])
            {
                found = true;
                break;
            }
        }
        if (found == true)
        {
            return i;
        }
    }
    return -1;
}