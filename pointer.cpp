#include <iostream>
using namespace std;

int main()
{
    int num = 5;

    cout << "address of num :" << &num << endl;

    int *ptr = &num;
    cout << "address of num :" << ptr << endl;
    *ptr=*ptr+1;
    cout << "value of num :" << *ptr<<endl;  //when pointer can be incres the num value is also incres

    //COPY pointer
    int *q=ptr;
    cout<<q<<" - "<<ptr<<endl;
    cout<<*q<<" - "<<*ptr;

}