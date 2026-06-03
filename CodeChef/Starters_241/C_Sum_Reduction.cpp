#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt[30] = {0};
        bool possible = true;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            for (int bit = 0; bit < 30; bit++) {
                if (x & (1LL << bit)) {
                    cnt[bit]++;
                    if (cnt[bit] > 1) {
                        possible = false;
                    }
                }
            }
        }
        if (possible) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}