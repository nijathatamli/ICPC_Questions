#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<char> nums;
    
    // Rəqəmləri götür (yalnız cüt indekslərdədir: 0, 2, 4 ...)
    for (int i = 0; i < s.size(); i += 2) {
        nums.push_back(s[i]);
    }
    
    // Sort et
    sort(nums.begin(), nums.end());
    
    // Çap et
    for (int i = 0; i < nums.size(); i++) {
        if (i > 0) cout << '+';
        cout << nums[i];
    }
    cout << endl;
}
