#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        vector<bool> visited(n + 1, false);
        int curr = 1;
        visited[curr] = true;
        for (int i = 0; i < n; i++) {
            if (s[curr - 1] == 'R')
                curr++;
            else
                curr--;

            visited[curr] = true;
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
            if (visited[i]) ans++;
        cout << ans << "\n";
    }
    return 0;
}