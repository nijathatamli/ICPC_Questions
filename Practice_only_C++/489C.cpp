#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
int main() {
    int m, s;
    cin >> m >> s;
    if (m == 1 && s == 0){
        cout << "0 0";
        return 0;
    }
    if (s > m * 9 || (s == 0 && m > 0)){
        cout << "-1 -1";
        return 0;
    }
    // maximumu tapir bu dosdum ehtiyati ol Nicat!
    vi max_v;
    int minn,left = s;

    for (int i = 0; i < m; i++)
    {
        minn = min(9, left);
        max_v.push_back(minn);
        left -= minn;
    }
    // buda minumum tapir Nicat ehtiyatli olda dosdum ortaliqdan
    vi min_v(m);
    left = s - 1;
    for (int i = m - 1; i >= 0; i--)
    {
        minn = min(9, left);
        min_v[i] = minn;
        left -= minn;
    }
    min_v[0] += 1;

    for (auto v: min_v) cout << v;   
    cout << ' ';
    for (auto x : max_v) cout << x;
}