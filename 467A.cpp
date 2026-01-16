#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,p,q,i,counter = 0;
    cin >> t;
    for (i = 0; i < t;i++)
    {
        cin >>p>>q;
        if (q - p >= 2)
        {
            counter++;
        }
    }
    cout << counter;
}