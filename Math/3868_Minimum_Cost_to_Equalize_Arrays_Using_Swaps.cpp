class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> freq;
        int n = nums1.size();
        for(int i = 0; i < n; i++){
            freq[nums1[i]]++;
            freq[nums2[i]]--;
        }
        long long swaps = 0;
        for(auto &p : freq){
            if(abs(p.second) % 2) return -1;
            swaps += abs(p.second) / 2;
        }
        return swaps / 2;   
    }
};