#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end(), greater<int>());

    stack<long int> a1;
    stack<long int> b1;
    for (int i = 0; i < n; i++)
    {   
        a1.push(a[i]);
        b1.push(b[i]);
    }
    int count = 0, max_count = 0;
    while (!a1.empty()&& !b1.empty())
    {
        if(a1.top()<=b1.top()){
            count++;
            a1.pop();
            max_count = max(max_count,count);
        }
        else{
            count--;
            b1.pop();
            max_count = max(max_count,count);
        }
    }
    cout << max_count << "\n";
}