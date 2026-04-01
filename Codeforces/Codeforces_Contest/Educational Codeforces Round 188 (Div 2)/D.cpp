#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> g(n + 1);
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        vector<int> color(n + 1, -1);
        long long ans = 0;
        for (int i = 1; i <= n; i++) {
            if (color[i] != -1) continue;
            queue<int> q;
            q.push(i);
            color[i] = 0;
            int c0 = 1, c1 = 0;
            bool bip = true;
            while (!q.empty()) {
                int v = q.front();
                q.pop();
                for (int to : g[v]) {
                    if (color[to] == -1) {
                        color[to] = color[v] ^ 1;
                        if (color[to] == 0) c0++;
                        else c1++;
                        q.push(to);
                    }
                    else if (color[to] == color[v]) {
                        bip = false;
                    }
                }
            }
            if (bip)
                ans += max(c0, c1);
            else
                ans += 1;
        }
        cout << ans << "\n";
    }
    return 0;
}