#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >> t;
    while (t--) {
        int n,h,l;cin >> n>>h >>l;
        int A = 0, B = 0, C = 0;
        for (int i = 0; i < n; i++) {
            int x;cin >> x;
            if (x<=h && x <= l) {
                C++;
            } else if (x <= h) {
                A++;
            } else if (x <= l) {
                B++;
            }
        }

        int answer = min({A + C, B + C, (A + B + C) / 2});
        cout << answer << '\n';
    }
    return 0;
}