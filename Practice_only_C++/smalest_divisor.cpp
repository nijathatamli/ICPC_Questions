#include <bits/stdc++.h>
using namespace std;

bool isPrime(int number) {
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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n; cin >> n;
    
    if (isPrime(n))
    {
        cout << n << '\n';
        return 0;
    }

    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << '\n';
            break;
        }
        
    }
    return 0;
}