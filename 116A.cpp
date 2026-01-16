#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, cap = 0, max_cap = 0;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int exit, enter;   
        cin >> exit >> enter;
        cap += enter - exit;
        if (cap > max_cap)
            max_cap = cap;
    }
    cout << max_cap;
    return 0;
}
