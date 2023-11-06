#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long int> a(n);
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum+a[i];
    }
    int i = 0, j = a.size() - 1;
    long long int max_sum = sum;
    while (i < j)
    {
        if (a[i] <= a[j])
        {
            sum -= a[i];
            max_sum = max(sum, max_sum);
            i++;
        }
        else
        {
            sum -= a[j];
            max_sum = max(sum, max_sum);
            j--;
        }
    }
    cout << max_sum << endl;
}