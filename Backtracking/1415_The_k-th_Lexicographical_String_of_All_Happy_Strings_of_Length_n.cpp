class Solution {
public:
    vector<string> ans;
    void solve(string &s, int n){
        if(s.size() == n){
            ans.push_back(s);
            return;
        }
        for(char ch = 'a'; ch <= 'c'; ch++){
            if(s.empty() || s.back() != ch){
                s.push_back(ch);
                solve(s, n);
                s.pop_back();
            }
        }
    }
    string getHappyString(int n, int k) {
        string s;
        solve(s, n);
        if(k > ans.size()) return "";
        return ans[k - 1];
    }
};