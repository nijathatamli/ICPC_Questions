#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n; cin >> n;
    for (ll i = 1; i < n+1; i++)
    {
        cout <<  (i - 1)*(i + 4)*(i* i - 3*i + 4)/2 << endl; 
    }
    return 0;
}