class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = INT_MAX;
        for(int x = 0; x < k; x++){
            for(int y = 0; y < k; y++){
                if(x == y) continue;
                int cost = 0;
                for(int i = 0; i < n; i++){
                    int rem = nums[i] % k;
                    int target;
                    if(i % 2 == 0) target = x;
                    else target = y;
                    int d = abs(rem - target);
                    cost += min(d, k - d);
                }
                ans = min(ans, cost);
            }
        }
        return ans;
    }
};