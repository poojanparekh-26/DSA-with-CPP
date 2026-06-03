#include<bits/stdc++.h>
using namespace std;

bool canReachHeight(long long h, vector<long long>& a, long long x){
    long long need = 0;
    for(long long val : a){
        if(val < h){
            need += (h - val);
            if(need > x){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        long long x;
        cin >> n >> x;
        vector<long long> a(n);
        long long mx = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        long long low = 1;
        long long high = mx + x;
        long long ans = mx;
        while(low <= high){
            long long mid = low + (high - low) / 2;
            if(canReachHeight(mid, a, x)){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}