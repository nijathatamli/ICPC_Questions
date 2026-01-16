#include <bits/stdc++.h>
#define int long long
using namespace std;

string s;

void solve_tc()
{
    string str;
    cin >> str;
    reverse(str.begin(), str.end());
    int idx = str[0] - 'A';
    for (int i = 1; i < (int)str.size(); ++i)
    {
        bool fl = 0;
        for (int j = 0; j <= 3; ++j)
        {
            if (idx - j >= 0 && s[idx - j] == str[i])
            {
                idx -= j;
                fl = 1;
                break;
            }
            if (idx + j < (int)s.size() && s[idx + j] == str[i])
            {
                idx += j;
                fl = 1;
                break;
            }
        }
        if (fl == 0)
        {
            cout << i << endl;
            break;
        }
    }
    if (str[0] <= 'C')
    {
        idx = 49 + (str[0] - 'A');
    }
    else
    {
        idx = 45 + (str[0] - 'D');
    }
    for (int i = 1; i < (int)str.size(); ++i)
    {
        bool fl = 0;
        for (int j = 0; j <= 3; ++j)
        {
            if (idx - j >= 0 && s[idx - j] == str[i])
            {
                idx -= j;
                fl = 1;
                break;
            }
            if (idx + j < (int)s.size() && s[idx + j] == str[i])
            {
                idx += j;
                fl = 1;
                break;
            }
        }
        if (fl == 0)
        {
            cout << i << endl;
            return;
        }
    }
    cout << "YES\n";
}

signed main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    for (int i = 1; i <= 7; ++i)
    {
        s += "ABCDEFGH";
    }
    s += "ABC";

    int t = 1;
    cin >> t;
    while(t--)
    {
        solve_tc();
    }

    return 0;
}