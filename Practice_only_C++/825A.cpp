#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, counter = 0;
    char c;
    string s = "";
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> c;
        if (c == '0')
        {
            s += (counter + '0');
            counter = 0;
        }
        else counter++;
    }
    s += (counter + '0');
    cout << s;
}