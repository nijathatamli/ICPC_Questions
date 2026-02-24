#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
void solve(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << *max_element(a, a + n) * n << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}