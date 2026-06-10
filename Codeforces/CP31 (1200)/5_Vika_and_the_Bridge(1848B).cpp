#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
        vector<vector<int>> pos(k + 1);
        for(int i = 1; i <= n; i++){
            int x;
            cin >> x;
            pos[x].push_back(i);
        }
        int ans = INT_MAX;
        for(int color = 1; color <= k; color++){
            int mx1 = 0, mx2 = 0;
            int prev = 0;
            for(int p : pos[color]){
                int gap = p - prev - 1;
                if(gap >= mx1){
                    mx2 = mx1;
                    mx1 = gap;
                }
                else if(gap > mx2) mx2 = gap;
                prev = p;
            }
            int gap = n - prev;
            if(gap >= mx1){
                mx2 = mx1;
                mx1 = gap;
            }
            else if(gap > mx2) mx2 = gap;
            int cur = max(mx2, mx1 / 2);
            ans = min(ans, cur);
        }
        cout << ans << endl;
    }

    return 0;
}