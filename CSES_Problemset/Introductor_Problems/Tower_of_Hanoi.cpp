#include <bits/stdc++.h>
using namespace std;
void towerOfHanoi(int n,int a,int b,int c){
         if (n == 0) { 
        return; 
    } 
    towerOfHanoi(n - 1, a, c, b); 
    cout <<  a <<" "<< c << endl; 
    towerOfHanoi(n - 1, b, a, c); 
}
int main()
{
    long long int n;
    cin >> n;
    cout << (1LL << n) - 1 << endl; 
    towerOfHanoi(n,1,2,3);
}