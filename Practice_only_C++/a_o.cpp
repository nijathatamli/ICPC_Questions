#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    while (t--) {
        int n,m;long long h;cin >> n >> m >> h;
        vector<long long> a(n), original(n);
        long long max_val = 0;
        for (int i= 0; i< n; i++) {
            cin >> a[i];
            original[i] = a[i];
            max_val =max(max_val, a[i]);
        }
        for (int i=0; i < m; i++) {
            int b;
            long long c;
            cin >> b >> c;
            b--; 
            a[b] += c;
            if (a[b] > max_val) max_val = a[b];
            if (max_val > h) {
                a = original;         
                max_val = *max_element(original.begin(), original.end());
            }
        }
        for (int i = 0; i < n; i++) 
            cout << a[i] << (i == n - 1 ? '\n' : ' ');
    }
    return 0;
}