#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        long long x;
        cin >> n >> x;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long pref = 0;
        long long ans = 0;
        for(int i = 0; i < n; i++){
            pref += a[i];
            if(pref > x) break;
            ans += (x - pref) / (i + 1) + 1;
        }
        cout << ans << endl;
    }

    return 0;
}