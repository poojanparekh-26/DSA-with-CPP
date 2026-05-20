#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        unordered_map<int,int> freq;
        int mx = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            freq[x]++;
            mx = max(mx, freq[x]);
        }
        int ans = 0;
        int cur = mx;
        while(cur < n){
            ans++;
            int take = min(cur, n - cur);
            ans += take;
            cur += take;
        }
        cout << ans << endl;
    }
    return 0;
}