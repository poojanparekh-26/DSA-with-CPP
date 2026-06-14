class Solution {
public:
    long long maxRatings(vector<vector<int>>& units) {
        int m = units.size(), n = units[0].size();
        long long ans = 0;
        if(n == 1) {
            for(int i = 0; i < m; i++) ans += units[i][0];
            return ans;
        }
        long long s0 = 0, s1 = 0;
        int g_min = 2e9, mn_sec = 2e9;
        for(int i = 0; i < m; i++) {
            sort(units[i].begin(), units[i].end());
            s0 += units[i][0];
            s1 += units[i][1];
            g_min = min(g_min, units[i][0]);
            mn_sec = min(mn_sec, units[i][1]);
        }
        ans = max(s0, s1 - mn_sec + g_min);
        return ans;
    }
};