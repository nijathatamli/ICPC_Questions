#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n; cin >> n;
    ll  a[n];    
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int p :  {
        2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
        31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
        73, 79, 83, 89, 97, 101, 103, 107, 109, 113,
        127, 131, 137, 139, 149, 151
    })
    {
        if (any_of(a, a+n, [&p](ll x) {return x % p;})){
            cout << p <<  endl;
            break;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}