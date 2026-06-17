#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        long long ans = 0;
        map<pair<int,int>, long long> mp;
        for(int i = 0; i < n; i++){
            int rx = a[i] % x;
            int ry = a[i] % y;
            ans += mp[{(x - rx) % x, ry}];
            mp[{rx, ry}]++;
        }
        cout << ans << endl;
    }
    return 0;
}