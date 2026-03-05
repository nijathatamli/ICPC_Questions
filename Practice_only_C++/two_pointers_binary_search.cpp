#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m; cin >> n >> m;
    vi a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    for (int x : b){
        int l = 0, r = a.size() - 1; 
        int ans = a.size();
        while (l <= r) 
        {
            int mid = l + (r-l) / 2;
            if (a[mid] >= x)
            {
                ans = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        cout << ans << ' ';
    }
    
    return 0;
}