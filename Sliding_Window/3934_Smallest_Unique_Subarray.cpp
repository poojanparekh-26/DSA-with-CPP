class Solution {
public:
    int smallestUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        const long long base = 911382323;
        const long long mod = 1e9 + 7;
        vector<long long> power(n + 1, 1);
        vector<long long> hashm(n + 1, 0);
        for(int i = 1; i <= n; i++){
            power[i] = (power[i - 1] * base) % mod;
        }
        for(int i = 0; i < n; i++){
            hashm[i + 1] =
            (hashm[i] * base + nums[i] + 1) % mod;
        }
        auto getHash = [&](int l, int r){
            long long val =
            (hashm[r + 1]
            - (hashm[l] * power[r - l + 1]) % mod
            + mod) % mod;
            return val;
        };
        auto check = [&](int len){
            unordered_map<long long,int> freq;
            for(int i = 0; i + len - 1 < n; i++){
                long long h =
                getHash(i, i + len - 1);
                freq[h]++;
            }
            for(auto &p : freq){
                if(p.second == 1)
                    return true;
            }
            return false;
        };
        int low = 1;
        int high = n;
        int ans = n;
        while(low <= high){
            int mid = (low + high) / 2;
            if(check(mid)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};