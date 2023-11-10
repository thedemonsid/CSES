#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(t;t>=1;t--){
       long long int a,b;
        cin>>a>>b;
        if ((a + b) % 3 == 0 && min(a, b) * 2 >= max(a, b)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}