#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
ll gcd(ll a, ll b){
    while (b != 0)
    {
        ll remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll w,h,d; cin >> w >> h >> d;
    ll n; cin >> n;
    ll wp = gcd(n,w);
    ll nw = n / wp;
    ll hp = gcd(nw, h);
    ll nh = nw / hp;
    ll dp = gcd(nh, d);
    ll nd = nh / dp;
    if (nd != 1)
        cout << -1  << endl;
    else cout << wp - 1 << ' ' << hp - 1 << ' '  << dp - 1;
    return 0;
}