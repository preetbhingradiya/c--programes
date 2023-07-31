#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> arr)
{
    int s=0;int e=arr.size()-1;

    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

    return arr;
}

vector<int> print(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{

    vector<int> arr;

    arr.push_back(11);
    arr.push_back(212);
    arr.push_back(0);
    arr.push_back(45);
    arr.push_back(89);
    arr.push_back(49);

    vector<int>ans=reverse(arr);

    print(ans);

    //seconde way
    
    // int arr[6] = {23, 11, 3, 2, 0, 100};
    // int size = 6;

    // int start = 0;
    // int end = size - 1;

    // while (start <= end)
    // {
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i]<<" ";
    // }
}