// Problem: Longest Substring Without Repeating Characters
// Platform: LeetCode
// Topic: Sliding Window, Hash Map
#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> lastSeen;
    int left = 0;
    int maxLen = 0;
    for(int right = 0; right < s.size(); right++) {
        if (lastSeen.count(s[right]) && lastSeen[s[right]] >= left) {
            left = lastSeen[s[right]] + 1;
        }
        lastSeen[s[right]] = right;
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}
int main() {
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s);
}