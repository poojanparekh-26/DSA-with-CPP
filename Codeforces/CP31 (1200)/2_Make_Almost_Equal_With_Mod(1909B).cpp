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
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long k = 2;
        while (k <= (1LL << 60)) {
            set<long long> st;
            for (auto x : a) st.insert(x % k);
            if (st.size() == 2) {
                cout << k << '\n';
                break;
            }
            k <<= 1;
        }
    }
    return 0;
}