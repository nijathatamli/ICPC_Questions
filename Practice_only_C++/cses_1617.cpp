#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    ll ans = 1;
    for(int i = 0; i < n; i++){
        ans = 2 * ans % MOD;
    }
    cout << ans;
    return 0;
}