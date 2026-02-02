#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    if (n * (n+1) / 2 % 2 != 0) {
        cout << "NO";
        return 0;
    }
    cout << "YES" << endl;
    vi v1, v2;
    if (n % 2){
        for(int i = 1; i < (n / 2) + 1 ; i++){
            if (i % 2){
                v1.push_back(i);
                v1.push_back(n - i);
            }
            else
            {
                v2.push_back(i);
                v2.push_back(n - i);
            }
        }
        if (v1.size() > v2.size()) v2.push_back(n);
        else v1.push_back(n);
    }
    else {
       for(int i = 0; i < (n / 2) ; i++){
            if (i % 2){
                v1.push_back(i + 1);
                v1.push_back(n - i);
            }
            else
            {
                v2.push_back(i + 1);
                v2.push_back(n - i);
            }
        }
    }
    cout << v1.size() << endl;
    for (auto i : v1) cout << i << " ";
    cout << endl;
    cout << v2.size() << endl;
    for(auto i : v2) cout << i << " ";
    return 0;
}