#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 4 == 0)
    {
        cout << "YES\n";
        cout << n / 2 << endl;
        for (int i = 1; i <= n / 2; i += 2)
        {
            cout << i << " ";
        }
        for (int i = (n / 2) + 2; i <= n; i += 2)
        {
            cout << i << " ";
        }
        cout << endl;
        cout << n / 2 << endl;
        for (int i = 2; i <= n / 2; i += 2)
        {
            cout << i << " ";
        }
        for (int i = (n / 2) + 1; i <= n; i += 2)
        {
            cout << i << " ";
        }
    }
    else if (n % 4 == 3)
    {    n++;
        cout << "YES\n";
        cout << n / 2 << endl;
        for (int i = 1; i <= n / 2; i += 2)
        {
            cout << i << " ";
        }
        for (int i = (n / 2) ; i < n; i += 2)
        {
            cout << i << " ";
        }
        cout << endl;
        cout << (n-1) / 2 << endl;
        for (int i = 2; i < n / 2; i += 2)
        {
            cout << i << " ";
        }
        for (int i = (n / 2) + 1; i <= n; i += 2)
        {
            cout << i << " ";
        }
    }
    else
    {
        cout << "NO\n";
    }
}