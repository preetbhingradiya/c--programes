#include <iostream>
using namespace std;

char maxWords(string num)
{
    int arr[26] = {0};

    for (int i = 0; i < num.length(); i++)
    {
        char ch = num[i];

        int count = 0;
        count = ch - 'a';
        num[count]++;
    }

    int maxi = 0, ans = 0;
    for (int i = 0; i < 26; i++)
    { 
        if (maxi < num[i])
        {
            ans = i;
            maxi = num[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}

int mai()
{

    string num;
    cin >> num;

    cout << maxWords(num);
}