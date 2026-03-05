#include <bits/stdc++.h>
using namespace std;
#define str string
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    str recipe; cin >> recipe;
    int nb,ns,nc; cin >> nb >> ns >> nc;
    int pb,ps,pc; cin >> pb >> ps >> pc;
    int r; cin >> r;
    
    int Bneed = 0,Sneed = 0,Cneed = 0; 
    for(auto x: recipe)
    {
        if (x == 'B') Bneed++;
        else if (x == 'S') Sneed++;
        else Cneed++; 
    }
    int l = 0, high = 1e13;
    int ans = 0;
    while (l <= high)
    {
        int mid = l + (high - l) / 2;

        int sum_b = Bneed * mid;
        int sum_c = Cneed * mid;
        int sum_s = Sneed * mid;

        int buy_b = max(0LL, sum_b - nb);
        int buy_c = max(0LL, sum_c - nc);
        int buy_s = max(0LL, sum_s - ns);

        int cost = buy_b * pb + buy_c * pc + buy_s * ps;
        if(cost <= r)
        {
            l = mid + 1;
            ans = mid;
        }
        else{
            high = mid - 1;
        }
    }
    cout << ans << '\n';
    return 0;
}