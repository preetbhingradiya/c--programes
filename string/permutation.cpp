#include<iostream>
using namespace std;

bool chackEqual(int a[26],int b[26]){
    for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
           return false;
        }
    }
   return true;

}

int main(){
    string s1;
    cout<<"enter the s1 string :"<<endl;
    cin>>s1;
    string s2;
    cout<<"enter the s2 string :"<<endl;
    cin>>s2;

    int count1[26]={0};
    for(int i=0;i<s1.length();i++){
        int index=s1[i]-'a';
        count1[index]++;
    }


    //seconde wimdow
    int i=0;
    int window=s1.length();
    int count2[26]={0};
    while (i<window && i<s2.length())
    {
        int index=s2[i]-'a';
        count2[index]++;
        i++;
    }
    
    if(chackEqual(count1,count2))
       return true;

    while(i<s2.length()){
        int new_index=s2[i]-'a';
        count2[new_index]++;

        int old_index=s2[i]-'a';
        count2[new_index]--;
        i++;

        if(chackEqual(count1,count2))
            return true;
    }
    return false;
}