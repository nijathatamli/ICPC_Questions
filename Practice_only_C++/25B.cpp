#include <bits/stdc++.h>
using namespace std;
using ch = char;
using str = string;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    ch s;
    if (n % 2){
        str s; cin >> s;
        for (int i = 0; i < n - 3; i++)
        {
            cout << s[i];
            if (i % 2) cout << '-';
        }
        cout << s[n-3] << s[n - 2] << s[n - 1];
    }
    else
    {
        for (int i = 1; i < n+1; i ++){
            cin >> s;
            cout << s;
            if (i % 2 == 0 && i != n) cout << '-';
        }
    }
    
    return 0;
}
