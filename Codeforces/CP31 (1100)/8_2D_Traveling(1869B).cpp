#include<bits/stdc++.h>
using namespace std;

long long dist(long long x1, long long y1,
               long long x2, long long y2){
    return llabs(x1 - x2) + llabs(y1 - y2);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, a, b;
        cin >> n >> k >> a >> b;
        a--;
        b--;
        vector<long long> x(n), y(n);
        for(int i = 0; i < n; i++){
            cin >> x[i] >> y[i];
        }
        long long direct = dist(x[a], y[a], x[b], y[b]);
        long long ans = direct;
        if(k > 0){
            long long da = LLONG_MAX;
            long long db = LLONG_MAX;
            for(int i = 0; i < k; i++){
                da = min(da, dist(x[a], y[a], x[i], y[i]));
                db = min(db, dist(x[b], y[b], x[i], y[i]));
            }
            ans = min(ans, da + db);
        }
        cout << ans << '\n';
    }
    return 0;
}