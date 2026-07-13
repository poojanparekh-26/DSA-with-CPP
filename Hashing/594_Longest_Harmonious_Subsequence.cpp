class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int x : nums){
            freq[x]++;
        }
        int ans = 0;
        for(auto &it : freq){
            if(freq.count(it.first + 1)){
                ans = max(ans, it.second + freq[it.first + 1]);
            }
        }
        return ans;
    }
};