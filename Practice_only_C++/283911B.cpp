#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k; cin >> n >> k;
    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vi b(k); // {3 3 5 8 9}
    while (k--)
    {
        ll x; // 9
        cin >> x;
        int l = 0, r = n - 1;
        int ans = -1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (a[mid] <= x)
            {
                ans = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        cout << (ans == -1 ? 0 : ans + 1) << endl;
    }
    return 0;
}