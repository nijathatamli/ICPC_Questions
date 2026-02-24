#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int l = 0, r = n -1;
    bool status = true;
    for(int i = 1; i <= n; i++)
    {
        if (i == a[l]){
            l += 1;
        }
        else if(i == a[r]){
            r -= 1;
        }
        else {
            status = false;
            break;
        }
    }
    cout << (status ? "YES\n" : "NO\n");
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}