#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
     for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    sort(&arr1[0],&arr1[0]+n);
    sort(&arr2[0],&arr2[0]+m);
    int i=0,j=0,ans=0;
    while(i<n && j<m){
        if(arr2[j]>arr1[i]+k){
            i++;
        }
        else if(arr2[j]<arr1[i]-k){
            j++;
        }
        else{
            ans++;
            i++;
            j++;
        }
    }
    cout<<ans<<"\n";
}