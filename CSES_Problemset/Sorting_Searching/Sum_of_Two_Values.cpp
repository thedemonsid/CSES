#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++){
       int b;
       cin>>b;
       a.push_back({b,i+1});
    }
    // for(int i=0;i<n;i++){
    //   cout<<a[i].first<<" "<<a[i].second<<endl;
    // }
    sort(a.begin(),a.end());
    int i=0;
    int j=a.size()-1;
    while(i<j){    
        if(a[i].first+a[j].first==x){
            cout<<a[i].second<<" "<<a[j].second<<endl;
            break;
        }
        else if(a[i].first+a[j].first>x){
            j--;
        }
        else {
            i++;
        }
    }
    if(i==j)cout<<"IMPOSSIBLE\n";
}