// Problem: Two Sum
// Platform: LeetCode
// Topic: Arrays, Hash Map
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int rem = target - nums[i];
            if(mp.count(rem)){
                return {mp[rem],i};
            }
            mp[nums[i]] = i;;
        }
        return {};
}

int main() {
    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    cout << "Indices: ";
    for(int i : result)
        cout << i << " ";

    return 0;
}