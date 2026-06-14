class Solution {
public:
    int getLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;
        for(int l = 0; l < n; l++){
            unordered_map<int,int> freq;
            unordered_map<int,int> cnt;
            int mx = 0;
            for(int r = l; r < n; r++){
                int x = nums[r];
                int old = freq[x];
                int nw = old + 1;
                freq[x] = nw;
                if(old > 0){
                    cnt[old]--;
                    if(cnt[old] == 0) cnt.erase(old);
                }
                cnt[nw]++;
                mx = max(mx, nw);
                int len = r - l + 1;
                if(len == 1){
                    ans = max(ans, len);
                    continue;
                }
                if(cnt.size() == 1){
                    if(freq.size() == 1) ans = max(ans, len);
                    continue;
                }
                if(cnt.size() == 2){
                    if(mx % 2 == 0){
                        int half = mx / 2;
                        if(cnt.count(half)) ans = max(ans, len);
                    }
                }
            }
        }
        return ans;
    }
};