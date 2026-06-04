#include<bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        long long ans = 1;
        for(int i = n - 1; i >= 0; i--){
            int pos = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
            long long cnt = n - pos;
            cnt -= (n - 1 - i);
            if(cnt <= 0){
                ans = 0;
                break;
            }
            ans = (ans * cnt) % MOD;
        }
        cout << ans << endl;
    }
    return 0;
}