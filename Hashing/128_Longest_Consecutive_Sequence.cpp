class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxlength = 1,length = 1;
        int l = 0, r = 1, n = nums.size();
        if(n == 0 || n == 1) return n;
        while(r < n){
            if(nums[r] == nums[r - 1] + 1){
                length++;
                r++;
            }
            else if(nums[r] == nums[r - 1]){
                r++;
            }
            else{
                length = 1;
                l = r;
                r++;
            }
            maxlength = max(maxlength, length);
        }
        return maxlength;
    }
};