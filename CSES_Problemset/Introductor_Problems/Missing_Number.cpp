#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n-1);
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int i;
    for( i=1;i<=n-1;i++){
       if(a[i-1]!=i){
        cout<<i<<endl;
        break;
       }
    }
    if(i==n)cout<<n<<endl;
}