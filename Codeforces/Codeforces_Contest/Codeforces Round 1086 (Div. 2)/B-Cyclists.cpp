#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n,k,p,m;
        cin >> n >> k >> p >> m;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++)
            cin >> a[i];
        if(p <= k) {
            cout << m / a[p] << "\n";
            continue;
        }
        int minCost = INT_MAX;
        for(int i=1;i<=k;i++)
            minCost = min(minCost, a[i]);
        int cost_to_reach = (p - k) * minCost;
        if(cost_to_reach > m) {
            cout << 0 << "\n";
            continue;
        }
        int remaining = m - cost_to_reach;
        cout << 1 + remaining / a[p] << "\n";
    }
}