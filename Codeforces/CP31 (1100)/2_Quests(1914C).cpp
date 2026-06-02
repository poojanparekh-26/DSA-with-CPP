#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<long long> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        long long ans = 0;
        long long prefix = 0;
        long long mx = 0;
        for(int i = 0; i < min(n, k); i++){
            prefix += a[i];
            mx = max(mx, b[i]);
            long long cur = prefix + 1LL * (k - i - 1) * mx;
            ans = max(ans, cur);
        }
        cout << ans << endl;
    }
    return 0;
}