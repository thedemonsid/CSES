#include<bits/stdc++.h>
using namespace std;
int m = 1000000007;
int main(){
   long long  int n;
    cin>>n;
    long long int ans=1;
    for(int i=0;i<n;i++){
        ans = ((ans%m)*(2%m))%m;
    } 
    cout<<ans;
}