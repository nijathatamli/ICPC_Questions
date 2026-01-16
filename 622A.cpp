#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n;
    cin >> n;
    n--;
    for (long long i = 1; i <= n; i++)
        n -= i;

    cout << n+1;
    return 0;
}
