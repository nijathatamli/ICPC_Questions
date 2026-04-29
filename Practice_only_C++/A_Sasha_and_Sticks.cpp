#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ios_ ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define ep emplace_back
#define pb push_back
#define pii pair<int,int>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
const int sz = 3e5 + 9;
const int LOG = 63;
const int MOD = 1e9 + 7;
const int INF = 1e18;
int a[sz], b[sz], c[sz];

int n;

signed main(){
    int k; cin >> n >> k;
    cout << ((n / k) & 1 ? "YES" : "NO");
}