#include <bits/stdc++.h>
using namespace std;

bool isprime(int n) {
    for(int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, s = 0; cin >> n >> m;
    n -= (n % 2 == 0);  
    for(int i = n; i * i< m; i += 2)
    {
        if (isprime(n))
        {
            s++;
        }
    }
    cout << s << '\n';
    return 0;
}