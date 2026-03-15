#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        unordered_map<int,int> freq;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                int x;
                cin >> x;
                freq[x]++;
            }
        }
        bool ok = true;
        for(auto &p : freq) {
            if(p.second > n * (n - 1)) {
                ok = false;
                break;
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}