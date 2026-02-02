#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll a,b,n; cin >> a >> b >> n;
    cout << (b * n <= a || b >= a ? "1\n" : "2\n");
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}