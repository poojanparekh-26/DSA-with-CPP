#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
    int luckyCount = freq['4'] + freq['7'];
    if (luckyCount == 4 || luckyCount == 7)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}