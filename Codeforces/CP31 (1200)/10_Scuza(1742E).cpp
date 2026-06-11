#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, q;
        cin >> n >> q;
        vector<long long> a(n);
        vector<long long> pref(n);
        vector<long long> mx(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(i == 0){
                pref[i] = a[i];
                mx[i] = a[i];
            }
            else{
                pref[i] = pref[i-1] + a[i];
                mx[i] = max(mx[i-1], a[i]);
            }
        }
        while(q--){
            long long k;
            cin >> k;
            int pos = upper_bound(mx.begin(), mx.end(), k) - mx.begin() - 1;
            if(pos < 0) cout << 0 << " ";
            else cout << pref[pos] << " ";
        }
        cout << endl;
    }

    return 0;
}