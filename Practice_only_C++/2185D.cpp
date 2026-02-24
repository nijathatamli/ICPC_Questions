#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<long long>
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        ll h;
        cin >> n >> m >> h;
        vl original(n), add(n, 0);
        vi ver(n, 0);
        for (int i=0;i < n; i++) {
            cin >>original[i];
        }
        int q = 1;
        for (int i = 0; i < m; i++) {
            int b;
            ll c;
            cin >> b >> c;
            --b;
            if (ver[b] != q) {
                ver[b] = q;
                add[b] = 0;
            }
            add[b] += c;
            if (original[b] + add[b] > h) {
                q++;
            }
        }
        for (int i=0; i < n; i++) {
            long long val = original[i] + (ver[i] == q ? add[i] : 0LL);
            cout << val << (i + 1 == n ? '\n' : ' ');
        }
    }
    return 0;
}