class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long ans=0,total=0;
        long long l=0,r=0;
        while(r<nums.size()){
            total+=nums[r];
            while(nums[r]*(r-l+1)>total+k){
                total-=nums[l];
                l++;
            }
            ans = max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};