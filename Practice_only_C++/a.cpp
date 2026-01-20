#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin >> t;
    while(t--){
        int n,m,k;
        cin >> n>> m >> k;
        vector<long long> robots(n);
        for(int i=0;i<n;i++) cin >> robots[i];
        vector<long long> spikes(m);
        for(int i=0;i<m;i++) cin >> spikes[i];
        sort(spikes.begin(), spikes.end());
        string gdCode;
        cin >> gdCode;
        vector<int> death_time(n, k+1);
        for(int i=0;i<n;i++){
            long long pos =robots[i];
            long long cur= pos;
            int time = 0;
            for(char c : gdCode){
                time++;
                if(c=='L') cur--;
                else cur++;
                if(binary_search(spikes.begin(), spikes.end(), cur)){
                    death_time[i] = time;
                    break;
                }
            }
        }
        vector<int> alive_delta(k+1,0);
        for(int i=0;i<n;i++){
            if(death_time[i]<=k) alive_delta[death_time[i]-1]--;
        }
        int alive = n;
        for(int i=0;i<k;i++){
            alive += alive_delta[i];
            cout << alive << (i==k-1?'\n':' ');
        }
    }
    return 0;
}