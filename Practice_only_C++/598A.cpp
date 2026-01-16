#include <bits/stdc++.h>
using namespace std;
int solve (){
    long long  n, pow = 1; cin >> n;
    long long sum  =  n * (n + 1) / 2;
    while  (pow <= n){
        sum -= 2 * pow;
        pow = pow * 2;
    }

    cout << sum<< endl;
    return 0;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; 
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}