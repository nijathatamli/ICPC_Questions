#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,s = 0; cin >> n;
    if (n == 1)
    {
        cout << n << '\n';
        return 0;
    }
    for(int i = 1; i * i < n;++i)
    {
        if (n % i == 0)
        {
           s+=2;
        }
    }
    cout << s << '\n';
    return 0;
}