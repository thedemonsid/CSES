#include<bits/stdc++.h>
using namespace std;
void convert(int i,int n){
    string s;
    while(i>0){
        s.push_back('0'+i%2);
        i/=2;
    }
    while(s.size()<n){
       s.push_back('0');
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}
int main(){
    int n;
    cin>>n;
    long long int loop = int(pow(2,n));
    for(int i=0;i<loop;i++){
         int l = i>>1;
         convert(l^i,n);
    }
}