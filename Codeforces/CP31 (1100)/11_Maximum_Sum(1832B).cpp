#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<long long> pref(n + 1, 0);
        for(int i=0;i<n;i++){
            pref[i + 1] = pref[i] + a[i];
        }
        long long ans = 0;
        for(int i=0;i<=k;i++){
            int left = 2 * i;
            int right = n - (k - i);
            long long remaining = pref[right] - pref[left];
            ans = max(ans, remaining);
        }
        cout << ans << endl;
    }
    return 0;
}