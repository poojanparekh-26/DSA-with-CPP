class Solution {
public:
    int countLocalMaximums(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<pair<int,int>> pos[201];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                pos[matrix[i][j]].push_back({i, j});
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int x = matrix[i][j];
                if(x == 0)
                    continue;
                bool ok = true;
                for(int val = x + 1; val <= 200 && ok; val++){
                    for(auto p : pos[val]){
                        int r = p.first;
                        int c = p.second;
                        int dr = abs(r - i);
                        int dc = abs(c - j);
                        if(dr <= x && dc <= x){
                            if(dr == x && dc == x)
                                continue;
                            ok = false;
                            break;
                        }
                    }
                }
                if(ok)
                    ans++;
            }
        }
        return ans;
    }
};