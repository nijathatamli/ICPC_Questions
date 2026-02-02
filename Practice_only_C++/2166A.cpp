#include <bits/stdc++.h>

using namespace std;

char s[100005];

int main()
{
	int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        int m = 0;
        for(int i = 0; i < n; i++) m += (s[i] != s[n-1]);
        cout << m << endl;
    }
	return 0;
}