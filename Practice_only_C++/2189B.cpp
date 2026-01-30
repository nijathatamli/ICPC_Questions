#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >> t;
    while (t--) {
        int n;
        int64 x;
        cin >> n >> x;
        int64 free_total = 0;
        int64 best_gain = LLONG_MIN;
        for (int i = 0; i < n; i++) {
            int64 a, b, c;                  // int64 max uchundu  buda long longdu 
            cin >>a>> b >> c;
            free_total += (b - 1) * a;
            best_gain =max(best_gain, b * a - c);
        }
        if (free_total>= x) {
            cout << 0 <<'\n';
            continue;
        }
        if (best_gain <= 0) {
            cout << -1 << '\n';
            continue;
        }
        int64 need = x - free_total;
        int64 ans = (need + best_gain - 1) / best_gain;
        cout << ans << '\n';
    }
    return 0;
}