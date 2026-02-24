#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m; cin >> n >> m;
    vi a(n), b(m), c(n+m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) cin >> b[i];
    int i = 0, j = 0, all = 0;
    while (i < a.size() || j < b.size())
    {
        if (a[i] < b[j])
        {
            c[all] = a[i];
            if (i != a.size())
            {
                i++;
            }
        }
        else {
            c[all] = b[j];
            if (j != b.size()){ 
                j++;
            }
        }
        all++;
    }
    for (auto x : c) cout << x << ' ';
    return 0;
}