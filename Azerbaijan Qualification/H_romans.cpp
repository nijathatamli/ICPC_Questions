#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Roman numeral piece lengths
int thousands_len[] = {0, 1, 2, 3};
int hundreds_len[]  = {0, 1, 2, 3, 2, 1, 2, 3, 4, 2};
int tens_len[]      = {0, 1, 2, 3, 2, 1, 2, 3, 4, 2};
int units_len[]     = {0, 1, 2, 3, 2, 1, 2, 3, 4, 2};

// Compute roman length WITHOUT building string
int roman_len(int x) {
    int t = x / 1000;
    int h = (x / 100) % 10;
    int te = (x / 10) % 10;
    int u = x % 10;

    return thousands_len[t] 
         + hundreds_len[h]
         + tens_len[te]
         + units_len[u];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    // Precompute roman lengths for 1..3999
    vector<int> cost(4000);
    for (int i = 1; i <= 3999; i++) {
        cost[i] = roman_len(i);
    }

    // DP for remainder 0..999
    const int INF = 1e9;
    vector<int> dp(1000, INF);
    dp[0] = 0;

    for (int v = 1; v < 1000; v++) {
        for (int x = 1; x <= 3999; x++) {
            if (v - x >= 0) {
                dp[v] = min(dp[v], dp[v - x] + cost[x]);
            }
        }
    }

    ll answer = (n / 1000) + dp[n % 1000];
    cout << answer << "\n";

    return 0;
}
