#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<pair<long long,int>> b;
        for(int i = 0; i < n; i++) b.push_back({a[i], i});
        sort(b.begin(), b.end());
        vector<long long> prefix(n);
        prefix[0] = b[0].first;
        for(int i = 1; i < n; i++) prefix[i] = prefix[i-1] + b[i].first;
        vector<int> ans(n);
        int r = 0;
        for(int i = 0; i < n; i++){
            long long score = b[i].first;
            r = max(r, i);
            while(r+1 < n && prefix[r] >= b[r+1].first) r++;
            ans[b[i].second] = r;
        }
        for(int x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}