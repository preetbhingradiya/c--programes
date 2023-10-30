#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int arr[6] = {12, 45, 11, 9, 3, 6};
    int k = 2;
    int size = 6;
    vector<int> temp(size);

    for (int i = 0; i < size; i++)
    {
        temp[(i + k) % size] = arr[i];
        //(0+2)%6=arr[0]  1st round
        //temp[2]=arr[0]  arr[2]=12
    }

    for (int i = 0; i < size; i++)
    {
        cout << temp[i] << " ";
    }
}