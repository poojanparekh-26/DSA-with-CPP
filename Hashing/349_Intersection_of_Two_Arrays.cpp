class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1, s2;

        for(int x : nums1){
            s1.insert(x);
        }
        vector<int> ans;
        for(int x : nums2){
            if(s1.count(x) && !s2.count(x)){
                ans.push_back(x);
                s2.insert(x);
            }
        }
        return ans;
    }
};