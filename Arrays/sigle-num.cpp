#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int nums[] = {2,2,1};
    int ans = nums[0];
    int n=sizeof(nums)/sizeof(nums[0]);
    for (int i = 1; i < n; i++)
    {
        ans = ans ^ nums[i];
    }

    cout<< ans<<" ";
}