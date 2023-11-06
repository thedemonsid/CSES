#include<bits/stdc++.h>
using namespace std;

int trailingZeroes(int n) {
    int count = 0;
    for (long long i=5; n/i>=1; i *= 5)
        count += n/i;
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << trailingZeroes(n);
    return 0;
}