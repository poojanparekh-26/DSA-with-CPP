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
        vector<int> w(n);
        for(int i=0;i<n;i++) cin >> w[i];
        int l = 0, r = n - 1;
        long long lsum = 0, rsum = 0;
        int ans = 0;
        while(l <= r){
            if(lsum <= rsum) lsum += w[l++];
            else rsum += w[r--];
            if(lsum == rsum) ans = l + (n - 1 - r);
        }
        cout << ans << endl;
    }
    return 0;
}