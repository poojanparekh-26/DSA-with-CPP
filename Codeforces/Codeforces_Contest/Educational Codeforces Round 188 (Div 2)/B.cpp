#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        int r = n - 1;
        int ans = 0;
        while (r >= 0) {
            int mx = -1;
            int pos = -1;
            for (int i = 0; i <= r; i++) {
                if (a[i] >= mx) { // ensures rightmost max
                    mx = a[i];
                    pos = i;
                }
            }
            ans++;
            r = pos - 1;
        }
        cout << ans << "\n";
    }
    return 0;
}