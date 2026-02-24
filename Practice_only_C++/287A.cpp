#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(int i = 0; i < 4; i++)
    {
        string s; cin >> s;    
        bool ok = false;
        for (auto x : s)
        {
            if (x == '#')
            {
                ok = true;
            }
        }
    }
    
    return 0;
}