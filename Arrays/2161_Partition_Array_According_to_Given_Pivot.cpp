class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left, equal, right;
        for(int x : nums){
            if(x < pivot) left.push_back(x);
            else if(x == pivot) equal.push_back(x);
            else right.push_back(x);
        }
        vector<int> ans;
        for(int x : left) ans.push_back(x);
        for(int x : equal) ans.push_back(x);
        for(int x : right) ans.push_back(x);
        return ans;
    }
};