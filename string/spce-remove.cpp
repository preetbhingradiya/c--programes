// #include <cstring>
#include <iostream>
using namespace std;
int main(){
   string str = "c++ programing is used in DSA";
   cout<<"Normal String :"<<str<<endl;
   string temp="";
   for (int i = 0; i < str.length(); i++) {
      if (str[i] == ' ') {
        temp.push_back('@');
        temp.push_back('4');
        temp.push_back('0');
      }
      else{
        temp.push_back(str[i]);
      }
   }
   // output string with '-'.
   cout <<"Output string :"<< temp << endl;
   return 0;
}