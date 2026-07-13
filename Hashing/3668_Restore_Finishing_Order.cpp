class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> s;

        for(int x : friends){
            s.insert(x);
        }

        vector<int> ans;

        for(int x : order){
            if(s.count(x)){
                ans.push_back(x);
            }
        }

        return ans;
    }
};