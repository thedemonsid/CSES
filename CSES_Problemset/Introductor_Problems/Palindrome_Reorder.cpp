#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    int flag=0;
    for(auto &str:mp){
        if(str.second%2==1){
            flag++;   
        }
    }
    if(flag>1)cout<<"NO SOLUTION\n";
    else{
        string a,b,c;
        for(auto &str:mp){
         if(str.second%2==1){
            while(str.second>0){
                c.push_back(str.first);
                str.second--;
            }
        }
        else{
            while(str.second!=0){
              a.push_back(str.first);
              b.push_back(str.first);
              str.second-=2;
        }
        }
        
    }
     reverse(b.begin(),b.end());
     a = a+c+b;
     cout<<a<<"\n";
    }
    
}