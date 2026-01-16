#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b, s = 0;
    cin >> a >> b;
    while (a <= b)
    {
        a = a * 3;
        b = b * 2;
        s++;
    }
    cout << s;
}
