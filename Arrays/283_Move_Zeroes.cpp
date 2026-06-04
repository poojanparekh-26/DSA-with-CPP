class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count =0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count++;
                nums.push_back(0);
            }
        }
        nums.erase(remove(nums.begin(),nums.begin()+n,0),nums.begin()+n);
    }
};