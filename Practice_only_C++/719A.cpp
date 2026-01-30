#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    int a[n];
    bool status = true; 
    for (int i = 0; i < n; i++) cin >> a[i];
    if (n == 1){
    if (a[0] == 15) cout << "DOWN";
    else if (a[0] == 0) cout << "UP";
    else cout << -1;
    return 0;
    } 
    if (a[n-2] == 14&&a[n-1]==15) cout << "DOWN"; 
    else if (a[n-1] > a[n-2]) cout << "UP";
    else if (a[n - 1] == 0) cout << "UP";
    else if (a[n-1] < a[n-2]) cout << "DOWN";
    return 0;
}