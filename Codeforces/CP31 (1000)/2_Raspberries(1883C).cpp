#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        int ans = INT_MAX;
        int even = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            ans = min(ans, (k - a[i] % k) % k);
            if(a[i] % 2 == 0)
                even++;
        }
        if(k == 4){
            ans = min(ans, max(0, 2 - even));
        }
        cout << ans << endl;
    }
    return 0;
}