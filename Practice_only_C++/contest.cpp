#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;vector<int> p(n);
        if(n % 2==0) {
            for(int i = 0; i < n; i += 2) {
                p[i] = i+2;
                p[i+1]= i+1;
            }
        } else {
            for(int i = 0; i < n-3; i += 2) {
                p[i] = i+2;
                p[i+1] = i+1;
            }
            p[n-3] = n-1;
            p[n-2] = n;
            p[n-1] = n-2;
        }
        for(int i = 0; i < n; i++) cout << p[i] << " ";
        cout << "\n";
    }
}