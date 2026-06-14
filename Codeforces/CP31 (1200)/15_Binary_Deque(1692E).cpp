#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        int sum = 0;
        int l = 0;
        int mx = -1;
        for(int r = 0; r < n; r++){
            sum += a[r];
            while(sum > s){
                sum -= a[l];
                l++;
            }
            if(sum == s) mx = max(mx, r - l + 1);
        }
        if(mx == -1) cout << -1 << endl;
        else cout << n - mx << endl;
    }

    return 0;
}