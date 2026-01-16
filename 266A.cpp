#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;

    int counter = 0;
    for (int i = 1; i < n; ++i)
        if (s[i] == s[i - 1])
            ++counter;

    cout << counter;
    return 0;
}
