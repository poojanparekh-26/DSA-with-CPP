class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> test;
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                test.push_back(tolower(s[i]));
            }
        }
        int l=0,r=test.size()-1;
        bool ans = true;
        while(l<=r){
            if(test[l]==test[r]){
                l++;
                r--;
            }
            else{
                ans = false;
                break;
            }
        }
        return ans;
    }
};