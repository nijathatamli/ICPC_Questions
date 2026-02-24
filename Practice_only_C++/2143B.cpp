#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
void solve(){
    int n, k; cin >> n >> k;
    vi a(n),b(k);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < k; i++) cin >> b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll ans = 0;
    for(int i = k; i > 0;i--){
        ll id = b[-i] - 1;
        ans += a.substr(0,id-1);
    }
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}