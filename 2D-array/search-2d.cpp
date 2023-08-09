#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    int row=3;
    int col=3;
    int s=0;
    int e=row*col-1;

    int mid=(s+e)/2;
    int target;
    cout<<"search element waht you can found :";
    cin>>target;

    while(s<=e){        //row     col
        int element=arr[mid/col][mid%col];

        if(element==target){
            cout<<"Element is here ";
            break;
        }
        else if(element<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
         mid=(s+e)/2;
    }
    return 0;
}