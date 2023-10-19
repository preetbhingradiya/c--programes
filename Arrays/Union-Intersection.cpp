
// C++ code to implement the approach

#include <bits/stdc++.h>
using namespace std;

void printIntersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else /* arr1[i] == arr2[j] */
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
}

vector<int> Unionarray(int arr1[], int arr2[], int n, int m)
{
    set<int> s;
    set<int> s1;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {

        s.insert(arr2[i]);
    }

    vector<int> vec(s.begin(), s.end());

    return vec;
}

int main()
{
    int arr1[] = {1, 2, 2, 2, 3};
    int arr2[] = {2, 3, 3, 4, 5, 5};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    vector<int> uni = Unionarray(arr1, arr2, n, m);
    for (int i : uni)
    {
        cout << i << " ";
    }cout<<endl;

    printIntersection(arr1, arr2, m, n);

    return 0;
}