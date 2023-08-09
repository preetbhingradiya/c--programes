#include<iostream>
using namespace std;

int isParegent(int arr[][4],int target,int row,int col){

    for(row=0;row<3;row++){
        for(col=0;col<4;col++){
            if(arr[row][col]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){

    int arr[3][4];

    cout<<"Enter the array :";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int target;
    cout<<"enter you founde number :";
    cin>>target;

    if(isParegent(arr,target,3,4)){
        cout<<"this number is founde";
    }
    else{
        cout<<"this number is not found";
    }
}