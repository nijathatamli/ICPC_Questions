#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
void solve(){
    int n; cin >> n;
    vi a(1,n+1);
    bool ok = false;
    for (int i = 1; i < n+1; i++) cin >> a[i];
    for(int i = 1; i * 2 < n + 1; i++) ;
    cout << (ok ? "YES" : "NO");
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}