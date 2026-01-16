#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    char s;
    string c = "codeforces";
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (c.find(s) != string::npos)
            cout << "YES"<< endl;
        else cout << "NO" << endl;
    }
    return 0;
}
