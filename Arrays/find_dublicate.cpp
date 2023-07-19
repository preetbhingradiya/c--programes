#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "enetr the size of array :";
    cin >> size;
    int ans=0;

    int arr[20];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    
    for(int i=0;i<size;i++){
        ans=ans^i;
    }
    cout<<ans;

    //input : 2 3 4 1 6 2
    // outut : 2

}