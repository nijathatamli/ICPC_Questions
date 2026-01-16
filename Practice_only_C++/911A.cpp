#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    int a[n];
    int mn = INT_MAX;
    int last_index = -1, min_distance = n;
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if (a[i] == mn) {
            if (last_index != -1)
                min_distance = min(min_distance, i - last_index);
        last_index = i;
        }
    }
    cout << min_distance;
}