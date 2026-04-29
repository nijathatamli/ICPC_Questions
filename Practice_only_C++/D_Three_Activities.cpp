#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define $AzH_TxdmN$ ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define ep emplace_back
#define pb push_back
#define pii pair<int,int>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define vi vector<int>
const int sz = 3e5 + 9;
const int LOG = 63;
const int MOD = 1e9 + 7;
const int INF = 1e18;


int n;

vi getmax(vi &arr)
{
    vector<pair<int, int>> tmp(arr.size());
    for(int i = 0; i < tmp.size(); i++)
    {
        tmp[i].first = arr[i];
        tmp[i].second = i;
    }
    sort(tmp.rbegin(), tmp.rend());
    vi ans(3);
    for(int i = 0; i < 3; i++) ans[i] = tmp[i].second;

    return ans;
}

void solve()
{
    cin >> n;
    vi a(n), b(n), c(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0; i < n; i++) cin >> c[i];
    vi ma = getmax(a);
    vi mb = getmax(b);
    vi mc = getmax(c);
    int ans = 0; 
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            for(int k = 0; k < 3; k++)
            {
                int x = ma[i], y = mb[j], z = mc[k];
                if((y == x) || (z == y) || (x == z)) continue;
                ans = max(ans, a[x] + b[y] + c[z]);
            }
        }
    }

    cout << ans << '\n';
}

signed main(){
    int t; cin >> t;
    while(t--) solve();
}