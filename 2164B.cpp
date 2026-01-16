#include <bits/stdc++.h>
#define int long long
using namespace std;

mt19937_64 rng(chrono::steady_clock().now().time_since_epoch().count());

void solve_testcase()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i : v)
    {
        cin >> i;
    }
    for (int _ = 1; _ <= 1000; ++_)
    {
        int j = rng() % n;
        for (int i = 0; i < j; ++i)
        {
            if ((v[j] % v[i]) % 2 == 0)
            {
                cout << v[i] << ' ' << v[j] << '\n';
                return;
            }
        }
    }
    cout << "-1\n";
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        solve_testcase();
    }
}