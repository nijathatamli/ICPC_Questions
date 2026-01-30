#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    str a ; cin >> a;
    int c = 0,ans = 0;
    char r = 'A';
    for (char d : a)
    {
        if (d == r){
        ++c;
        ans = max(ans, c);
        }
        else {
            r = d;
            c = 1;
        }
    }
    ans = max(ans,c);
    cout << ans;
    return 0;
}