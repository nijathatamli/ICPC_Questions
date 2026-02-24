#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ll long long
int lower_bound(const vi& a, int l)
{
    int left = 0, right = a.size() - 1;
    int ans = a.size();
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (l <= a[mid])
        {
            ans = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    return ans;
    
}
int upper_bound(const vi& a, int r)
{
    int left = 0, right = a.size() - 1;
    int ans = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (r >= a[mid])
        {
            ans = mid;
            left = mid + 1;
        }
        else right = mid - 1;
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int t; cin >> t;
    sort(a.begin(),a.end());
    while (t--)
    {
        int l, r; cin >> l >> r;
        int left_index = lower_bound(a,l);
        int right_index = upper_bound(a,r);
        cout << max(0, right_index - left_index + 1) << " ";
    }
    return 0;
}