#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k; cin >> n >> k;
    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    while (k--)
    {
        ll x; cin >> x;
        int l = 0, r = n - 1;
        int ans = n;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if(a[mid] >= x)
            {
                ans = mid;
                r = mid - 1;
            }
            else l = mid  + 1;
        }
        cout << ans + 1 << endl;
    }
    return 0;
}