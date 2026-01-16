#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n; cin >> n;
    long long x;
    x =  1LL << n;
    cout << (1LL << (n + 1)) - 2;
    return 0;
}
 

// (2 ** (n+1)) - 2