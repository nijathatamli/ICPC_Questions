#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

long long modmul(long long a, long long b, long long m) {
    return (a * b) % m;
}

long long modfact(long long n, long long m) {
    long long res = 1;
    for (long long i = 1; i <= n; i++) res = (res * i) % m;
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        long long c;
        string s;
        cin >> n >> c >> s;

        vector<int> ones;
        for(int i = 0; i < n; i++) if(s[i] == '1') ones.push_back(i);

        if(ones.empty()) { // no 1, all zeros
            cout << -1 << "\n";
            continue;
        }

        long long f = 1;
        // factorial of number of ones
        f = modfact(ones.size(), MOD);

        // multiply gaps between ones + before first + after last
        int prev = -1;
        for(int idx : ones) {
            int gap = idx - prev - 1;
            f = modmul(f, gap + 1, MOD);
            prev = idx;
        }
        int gap_end = n - ones.back() - 1;
        f = modmul(f, gap_end + 1, MOD);

        if(f % c == 0) cout << -1 << "\n";
        else cout << f << "\n";
    }
}
