class Solution {
public:
    int maxDistinct(string s) {
        vector<int> freq(26, 0);
        int ans = 0;
        for(char ch : s){
            if(freq[ch - 'a'] == 0) ans++;
            freq[ch - 'a']++;
        }
        return ans;
    }
};