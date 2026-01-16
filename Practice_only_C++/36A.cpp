#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);

    int n;
    cin >> n;
    char s;
    vector<int> days;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == '1')
        {
            days.push_back(i);
        }
    }
    int first_interval = days[1] - days[0];
    bool status = true;
    for (int i = 2;i < days.size(); i++)
    {
        if (days[i] - days[i-1] != first_interval)
        {
            status = false;
            break;
        }
    }
    cout << (status ? "YES\n" : "NO\n");
}