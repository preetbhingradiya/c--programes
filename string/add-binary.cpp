#include<iostream>
using namespace std;

int main(){
    string a="11", b="1";
    int alen=a.size()-1;
    int blen=b.size()-1;

    int carry=0;
    string s;
    while(alen>=0 || blen>=0){
        int sum=carry;
        if(alen>=0)
            sum=sum+a[alen--]-'0';
        if(blen>=0)
            sum=sum+b[blen--]-'0';
        s.push_back(sum%2+'0');
        carry=sum/2;
    }
    if(carry!=0)
        s.push_back(carry+'0');
    // reverse(s.begin(),s.end());
    cout<<s<<" ";
}