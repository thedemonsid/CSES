#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    vector<int>p(n);
    
    for(int i=0;i<n;i++)cin>>p[i];
     
     sort(p.begin(),p.end());
     int i=0,j=p.size()-1,ans=0,ans2=0;
     while(i<=j){
        if(i==j){
            if(p[i]<=x)ans++;
            break;
        }
        if(p[i]+p[j]>x){
            j--;
            ans2++;
        }
        else{
            i++;j--;
            ans++;
        }
     }
     cout<<ans+ans2<<"\n";

}