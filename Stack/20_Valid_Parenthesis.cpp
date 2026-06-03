// Problem: Valid Parentheses
// Platform: LeetCode
// Topic: Stack
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for(char c : s) {
        if(c == '(' || c == '{' || c == '[')
            st.push(c);
        else {
            if(st.empty()) return false;

            char top = st.top();
            st.pop();

            if((c == ')' && top != '(') ||
               (c == '}' && top != '{') ||
               (c == ']' && top != '['))
                return false;
        }
    }

    return st.empty();
}

int main() {
    string s = "()[]{}";

    if(isValid(s))
        cout << "Valid";
    else
        cout << "Invalid";

    return 0;
}