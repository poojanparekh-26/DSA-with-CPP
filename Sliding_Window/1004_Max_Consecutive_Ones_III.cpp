class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0, r = 0;
        int zeros = 0, len = 0;     
        while(r<n){
            if(nums[r] == 1){
                r++;
                len = max(len, r-l);
            }
            else{
                if(zeros < k){
                    zeros++;
                    r++;
                    len = max(len, r-l);
                }
                else{
                    if(nums[l] == 0){
                        zeros--;
                    }
                    l++;
                }
            }
        }
        return len;
    }
};