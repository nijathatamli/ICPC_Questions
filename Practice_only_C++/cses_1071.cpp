#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll y, x; cin >> y >> x;
    ll ans = 0;
    if (x == y)
    {
        cout << (x * y) - (x - 1); return;
    }
    else {
        ll mx = max(x,y);
        ll pow_mx = pow(mx, 2);
        if (x > y){
            if (x % 2) ans += x - y;
            else ans -= x - y;  
        }
        else{
            if (x % 2) ans -= y - x;
            else ans += y - x;
        }
    }
    cout << ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t; cin >> t;
    while (t--) solve();
    return 0;
}