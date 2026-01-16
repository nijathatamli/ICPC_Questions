#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;

    vector<int> opinions(n);
    for (int i = 0; i < n; i++) {
        cin >> opinions[i];
    }

    bool hard = false;
    for (int x : opinions) {
        if (x == 1) {
            hard = true;
            break;
        }
    }

    if (hard) cout << "HARD";
    else cout << "EASY";

    return 0;
}
