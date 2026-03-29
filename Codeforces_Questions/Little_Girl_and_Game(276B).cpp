#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    unordered_map<char,int> freq;
    for(char c : s)
        freq[c]++;
    int odd = 0;
    for(auto x : freq)
        if(x.second % 2 != 0)
            odd++;
    if(odd == 0 || odd % 2 == 1)
        cout << "First";
    else
        cout << "Second";
    return 0;
}