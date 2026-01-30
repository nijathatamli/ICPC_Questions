#include <bits/stdc++.h>
using namespace std;
#define str string
#define ll long long
#define vi vector<int>
void solve()
{
    int n; cin >> n;
    str s; cin >> s;
    s += s;
    n *= 2;
    int current = 0;
    int mx = 0; 
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1') current = 0;
        else current++;
        mx= max(current, mx); 
    }
    cout << mx << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--)
        solve();
    return 0;
}