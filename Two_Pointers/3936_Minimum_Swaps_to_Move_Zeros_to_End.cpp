class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int swaps = 0;
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        while(l < r){
            if(nums[l] == 0){
                if(nums[r] != 0){
                    swap(nums[l], nums[r]);
                    swaps++;
                    l++;
                    r--;
                }
                else{
                    r--;
                }
            }
            else{
                l++;
            }
        }
        return swaps;
    }
};