#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<int> diff(n);
        diff[0] = -1;
        for(int i = 1; i < n; i++){
            if(a[i] != a[i-1]) diff[i] = i - 1;
            else diff[i] = diff[i-1];
        }
        int q;
        cin >> q;
        while(q--){
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            if(diff[r] >= l) cout << diff[r] + 1 << " " << r + 1 << endl;
            else cout << -1 << " " << -1 << endl;
        }
        cout << endl;
    }
    return 0;
}