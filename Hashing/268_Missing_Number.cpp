class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int> map(n+1,0);
        for(int i=0;i<n;i++){
            map[nums[i]]++;
        }
        int j=0;
        for(j;j<n;++j){
            if(map[j]==0) break;
        }
        return j;
    }
};