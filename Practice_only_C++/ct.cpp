#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> blogs(n);

        for (int i = 0; i < n; i++) {
            int l;
            cin >> l;
            blogs[i].resize(l);
            for (int j = 0; j < l; j++)
                cin >> blogs[i][j];
        }

        // Compute reversed unique contribution
        vector<vector<int>> contrib(n);

        for (int i = 0; i < n; i++) {
            unordered_set<int> used;
            for (int j = blogs[i].size() - 1; j >= 0; j--) {
                int u = blogs[i][j];
                if (!used.count(u)) {
                    used.insert(u);
                    contrib[i].push_back(u);
                }
            }
        }

        vector<int> order(n);
        iota(order.begin(), order.end(), 0);

        // IMPORTANT: descending order
        sort(order.begin(), order.end(), [&](int a, int b) {
            return contrib[a] > contrib[b];
        });

        list<int> Q;
        unordered_map<int, list<int>::iterator> pos;

        for (int id : order) {
            for (int u : blogs[id]) {
                if (pos.count(u)) {
                    Q.erase(pos[u]);
                }
                Q.push_front(u);
                pos[u] = Q.begin();
            }
        }

        for (int x : Q)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}