#include <bits/stdc++.h>
using namespace std;
#define vi vector<int> 
#define int long long
void solve()
{
    int n; cin >> n;
    string text; cin >> text;
    map <int,int> a;
    a[0] = 1;
    int res = 0,s = 0;
    for (int i = 0; i < n; i++)
    {
        s += text[i] - '0';
        int x = s - i - 1;
        if (!a.count(x)) a[x] = 0;
        a[x] += 1;
        res += a[x] - 1;
    }
    cout << res << endl;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}