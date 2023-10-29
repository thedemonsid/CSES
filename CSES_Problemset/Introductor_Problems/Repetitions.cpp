#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c=0,mc=0,key=s[0];
    for(int i=0;i<s.length();i++){
        if(s[i]==key){
           c++;
           mc=max(c,mc);
        }
        else{
            key=s[i];
            c=1;
           mc=max(c,mc);
        }
    }
    cout<<mc<<endl;
}