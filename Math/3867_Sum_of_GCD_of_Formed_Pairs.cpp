class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        long long n = nums.size();
        vector<long long> prefixGcd(n);
        long long mx = 0;
        for(int i = 0; i < n; i++){
            mx = max(mx, (long long)nums[i]);
            prefixGcd[i] = gcd((long long)nums[i], mx);
        }
        sort(prefixGcd.begin(), prefixGcd.end());
        long long ans = 0;
        long long l = 0, r = n - 1;
        while(l < r){
            ans += gcd(prefixGcd[l], prefixGcd[r]);
            l++;
            r--;
        }
        return ans;
    }
};