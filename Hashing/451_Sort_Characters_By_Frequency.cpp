class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(int i = 0; i < s.size(); i++) freq[s[i]]++;
        vector<pair<int,char>> v;
        for(auto it : freq) v.push_back({it.second, it.first});
        sort(v.begin(), v.end(), greater<pair<int,char>>());
        string ans;
        for(int i = 0; i < v.size(); i++) ans.append(v[i].first, v[i].second);
        return ans;
    }
};