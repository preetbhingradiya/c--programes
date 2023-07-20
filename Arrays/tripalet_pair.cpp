#include <iostream>
using namespace std;

int main()
{

    int arr[6] = {1, 2, 3, 4, 5,6};
    int size = 6;
    int tripalet =15;

    for (int i = 0; i < size; i++)
    {
        int element = arr[i];

        for (int j = i+1; j < size; j++)
        {
          int value=arr[j];

          for(int k=j+1;k<size;k++)
          {
            int temp=arr[k];

            if(element+value+temp==tripalet){
                cout<<element<<" + "<<value<<" + "<<temp<<" + "<<tripalet;
            }
          }
        }
    }
}