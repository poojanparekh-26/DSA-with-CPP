#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int ans = 0;
        int l = a[0] - x;
        int r = a[0] + x;
        for(int i = 1; i < n; i++){
            l = max(l, a[i] - x);
            r = min(r, a[i] + x);
            if(l > r){
                ans++;
                l = a[i] - x;
                r = a[i] + x;
            }
        }
        cout << ans << endl;
    }
    return 0;
}