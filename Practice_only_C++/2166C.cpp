#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ll long long 
void solve(){
    int n; cin >> n;
    ll a[n + 1];
    ll m = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
		if(a[i] > a[m])
			m = i;
    }
    a[n] = a[0];
    ll k = - a[m];
    for (int i = 0; i < n; i++) k+=max(a[i], a[i+1]);
    cout << k << endl;

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