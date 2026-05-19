#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<long long> a(n + 1);
        vector<long long> pref(n + 1, 0);
        long long total = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            total += a[i];
            pref[i] = pref[i - 1] + a[i];
        }
        while(q--){
            long long l, r, k;
            cin >> l >> r >> k;
            long long rangeSum =
            pref[r] - pref[l - 1];
            long long len = r - l + 1;
            long long newTotal = total - rangeSum + len * k;
            if(newTotal % 2 == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}