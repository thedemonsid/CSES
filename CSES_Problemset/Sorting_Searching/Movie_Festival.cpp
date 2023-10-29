#include<bits/stdc++.h>
using namespace std;
/*In a movie festival n movies will be shown.You know the starting and ending time of each movie.
 What is the maximum number of movies you can watch entirely?
*/
int main(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        cin>>b[i];
    }
    
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        v.push_back(make_pair(b[i],a[i]));
    }
    sort(v.begin(),v.end());
    int count = 0, max_count = 0;
    for(int i=0;i<n;i++){
        if(v[i].second>=count){
            count = v[i].first;
            max_count++;
        }
    }
    cout<<max_count<<"\n";
}