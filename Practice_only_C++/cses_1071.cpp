#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll y, x; cin >> y >> x;
    if (x == y)
    {
        cout << (x * y) - (x - 1) << endl; return;
    }
    else {
        ll mx = max(x,y);
        ll pow_mx = mx * mx;
        if (mx % 2) cout << (pow_mx - (mx - 1)) + abs(x - y) << endl;
        else cout << (pow_mx - (mx - 1)) - abs(x - y) << endl;
        }    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t; cin >> t;
    while (t--) solve();
    return 0;
}