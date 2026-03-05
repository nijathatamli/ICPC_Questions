#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isprime(int number) {
    if (number <= 1) {
        return false; 
    }
    if (number == 2 || number == 3) {
        return true; 
    }
    if (number % 2 == 0) {
        return false; 
    }

    for (int i = 3; i * i <= number; i += 2) {
        if (number % i == 0) {
            return false; 
        }
    }

    return true; 
} 

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            cout << n / i << '\n';
            return 0;
        }   
    }
    cout << 1 << '\n';
    
    return 0;
}