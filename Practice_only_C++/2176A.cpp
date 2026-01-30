#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, mx = 0, s = 0; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0;i < n; i++)
    {
        mx = max(mx, a[i]);
        if (a[i] == mx) s += 1;
    }
    cout << n - s << endl;
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}