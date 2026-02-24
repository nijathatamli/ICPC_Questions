#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }
    if (is_sorted(v.begin(), v.end()))
    {
        cout << "-1\n";
        return;
    }
    vector<int> vv = v;
    sort(vv.begin(), vv.end());
    int res = -1;
    for (size_t i = 0; i < v.size(); ++i)
    {
        if (vv[i] != v[i])
        {
            if (res == -1)
            {
                res = llabs(vv[i] - v[i]);
            }
            else
            {
                res = min(res, llabs(vv[i] - v[i]));
            }
        }
    }
    cout << res << '\n';
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc; cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}