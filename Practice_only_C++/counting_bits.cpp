#include <bits/stdc++.h>
using namespace std;

long long countBits(long long n) {
    if (n == 0) return 0;

    int x = 63 - __builtin_clzll(n); 
    long long msb = n - (1LL << x) + 1; 
    long long rest = x * (1LL << (x - 1)); 
    return msb + rest + countBits(n - (1LL << x));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n;
    cin >> n;
    cout << countBits(n) << "\n";
}
