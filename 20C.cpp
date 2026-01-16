#include <bits/stdc++.h>
#define int long long
using namespace std;

mt19937_64 rng(chrono::steady_clock().now().time_since_epoch().count());

const int INF = 1e18;

void solve_testcase()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> adj[n + 1];
    vector<int> dis(n + 1, INF);
    vector<int> par(n + 1, -1);
    for (int i = 1, j, k, l; i <= m; ++i)
    {
        cin >> j >> k >> l;
        adj[j].push_back({k, l});
        adj[k].push_back({j, l});
    }
    multiset<pair<int, int>> ms; /// weight, edge
    ms.insert({0, 1});
    dis[1] = 0;
    while(!ms.empty())
    {
        auto top = ms.begin();
        int w = (top -> first);
        int e = (top -> second);
        ms.erase(ms.begin());
        if (w <= dis[e])
        {
            for (auto neighbour : adj[e])
            {
                if (dis[e] + neighbour.second < dis[neighbour.first])
                {
                    dis[neighbour.first] = dis[e] + neighbour.second;
                    par[neighbour.first] = e;
                    ms.insert({dis[neighbour.first], neighbour.first});
                }
            }
        }
    }

    if (dis[n] == INF)
    {
        cout << "-1\n";
        return;
    }

    vector<int> path;
    int idx = n;
    while(idx != -1)
    {
        path.pb(idx);
        idx = par[idx];
    }

    reverse(path.begin(), path.end());

    for (size_t i = 0; i < path.size(); ++i)
    {
        cout << path[i] << " \n"[i == path.size() - 1];
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while(t--)
    {
        solve_testcase();
    }
}