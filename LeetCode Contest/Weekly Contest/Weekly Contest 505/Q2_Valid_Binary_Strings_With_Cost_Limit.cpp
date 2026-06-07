class Solution {
public:
    vector<string> generateValidStrings(int n, int k) {
        vector<string> ans;
        string cur;
        function<void(int, int)> dfs = [&](int idx, int cost){
            if(cost > k){
                return;
            }
            if(idx == n){
                ans.push_back(cur);
                return;
            }
            cur.push_back('0');
            dfs(idx + 1, cost);
            cur.pop_back();
            if(idx == 0 || cur.back() != '1'){
                cur.push_back('1');
                dfs(idx + 1, cost + idx);
                cur.pop_back();
            }
        };
        dfs(0, 0);
        return ans;
    }
};