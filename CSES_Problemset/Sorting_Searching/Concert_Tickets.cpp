
#include<bits/stdc++.h>
using namespace std;
/*
There are 
�
n concert tickets available, each with a certain price. Then, 
�
m customers arrive, one after another.

Each customer announces the maximum price they are willing to pay for a ticket, 
and after this, they will get a ticket with the nearest possible price such 
that it does not exceed the maximum price.

*/
int main() {
    int n, m;
    cin >> n >> m;
    multiset<int>t;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        t.insert(x);
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        if(t.upper_bound(x)==t.begin())cout<<"-1\n";
        else{
            
        }
    }

}