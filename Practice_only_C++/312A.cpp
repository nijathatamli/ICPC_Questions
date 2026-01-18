#include <bits/stdc++.h>
using namespace std;
using str = string;
void solve()
{
    str s;
    getline(cin, s);
    bool a1 = (
        s[s.length() - 5] == 'l' &&
        s[s.length() - 4] == 'a'&&
        s[s.length() - 3] == 'l'&&
        s[s.length() - 2] == 'a'&&
        s[s.length() - 1] == '.'
        );
    bool a2 = (
        s[0] == 'm'&&
        s[1] == 'i'&&
        s[2] == 'a'&&
        s[3] == 'o'&&
        s[4] == '.'
    );
    if ((a1 && a2)       || !(a1 || a2)) cout << "OMG>.< I don't know!" << endl;
    else if (a1) cout << "Freda's" << endl;
    else cout << "Rainbow's" << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie( 0);
    int t; cin >> t;
    cin.ignore();
    while(t--)
        solve();
    return 0;
}